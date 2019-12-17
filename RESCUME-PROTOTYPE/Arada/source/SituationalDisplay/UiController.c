/**
 * @file         UiController.c
 * @author       Joshua Branch, Veronica Hohe
 * 
 * @copyright Copyright (c) 2014 Battelle Memorial Institute. All rights reserved.
 * 
 * @par
 * Unauthorized use or duplication may violate state, federal and/or
 * international laws including the Copyright Laws of the United States
 * and of other international jurisdictions.
 * 
 * @par
 * @verbatim
 * Battelle Memorial Institute
 * 505 King Avenue
 * Columbus, Ohio  43201
 * @endverbatim
 * 
 * @brief
 * TBD
 * 
 * @details
 * TBD
*/
 
#include "UiController.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

#include "BtServer.h"
#include "VehicleData.h"
#include "GpsAdapter.h"
#include "TimeStamp.h"

#include "TravelerInformation.h"

#include "Debug.h"

#define UUID "6ba50000-7c6a-11e3-9b95-0002a5d5c51b"
#define MAX_RX_HANDLER_COUNT 10

static int (*uiRxMessageCallbacks[MAX_RX_HANDLER_COUNT])(cJSON *object) = {0};

void ui_processRxMessage(char *msg);


/***********************************************
 * EXPOSED METHODS
 **********************************************/
void ui_startServer()
{
	btServer_start(UUID);
	btServer_setRxMessageCallback(ui_processRxMessage);
}

void ui_stopServer()
{
	btServer_setRxMessageCallback(NULL);
	btServer_stop();

	int i;
	for(i = 0; i < MAX_RX_HANDLER_COUNT; i++)
		uiRxMessageCallbacks[i] = NULL;
}

void ui_addRxMessageHandler(int (*handler)(cJSON *root))
{
	int i;
	for(i = 0; i < MAX_RX_HANDLER_COUNT; i++)
	{
		if (uiRxMessageCallbacks[i] == NULL)
		{
			uiRxMessageCallbacks[i] = handler;
			break;
		}
	}

	if(i == MAX_RX_HANDLER_COUNT)
		DBG_ERR(DBGM_UI, printf("UiController: Unable to add RxMessage Handler. No open slots available.\n"));
}

void ui_sendMessage(cJSON *root)
{
	if (!root)
		return;

	char *msg = cJSON_PrintUnformatted(root);
	DBG(DBGM_UI, printf("Sending Message: %s\n", msg));
	printf("Sending Message: %s\n", msg);
	btServer_sendMessageToAllClients(msg);
	free(msg);
}

void ui_printf(const char* format, ... )
{
	const int MAX_MSG_LENGTH = 2000;
	char consoleMsg[MAX_MSG_LENGTH];

	va_list args;
	va_start(args, format);
	vsnprintf(consoleMsg, MAX_MSG_LENGTH, format, args); 
	va_end(args);

	cJSON *root = cJSON_CreateObject();
	cJSON_AddStringToObject(root, "typeid", "CON");
	cJSON_AddStringToObject(root, "msg", consoleMsg);

	char *msg = cJSON_PrintUnformatted(root);
	DBG(DBGM_UI, printf("Sending Message: %s\n", msg));
	btServer_sendMessageToAllClients(msg);
	free(msg);
	cJSON_Delete(root);
}


/***********************************************
 * INTERNAL METHODS
 **********************************************/
void ui_processRxMessage(char *msg)
{
	cJSON *root = cJSON_Parse(msg);

	if (!root)
	{
		DBG_ERR(DBGM_UI, printf("UiController::ui_processRxMessage():(ERROR) JSON Parse Error at character %d [ %s ]\n", (int)(cJSON_GetErrorPtr() - msg), cJSON_GetErrorPtr()));
		return;
	}

	int i;
	for(i = 0; i < MAX_RX_HANDLER_COUNT; i++)
	{
		if (uiRxMessageCallbacks[i])
			if (uiRxMessageCallbacks[i](root))
				break;
	}

	if (i == MAX_RX_HANDLER_COUNT)
		DBG_ERR(DBGM_UI, printf("UiController: Unable to find message handler for %s\n", msg));

	cJSON_Delete(root);
}



/***********************************************
 * DEPRECIATED METHODS
 **********************************************/


/*void parseMessage(char *msg, int msgLength)
{
	printf("MESSAGE: %s\n",msg);

	if(strstr(msg,"TIM") == msg) {
		TravelerInformation_t *tim = (TravelerInformation_t *)calloc(1, sizeof(TravelerInformation_t));
		parseTIMData(tim, msg);
		qwarnOnRecvMessage(tim, WSMMSG_TIM);

		
	} else if(strstr(msg,"WTR") == msg) {
		parseWeatherData(msg,wtrData);
		memcpy(&btwtr, wtrData, sizeof(btwtr));
		btveh.external_air_temperature = -1000;
		btveh.barometric_pressure = -1;

	} else if(strstr(msg,"VEH") == msg) {
		parseVEHData(msg,vehData);
		memcpy(&btveh, vehData,sizeof(btveh));
	}
}*/

/*void btUpdateGpsData(GPSData *gpsData) {
//    uiprintf("btUpdateGpsData Speed:%6.2f Heading:%6.2f", gpsData->speed, gpsData->course);
//    printf("btUpdateGpsData Speed:%6.2f Heading:%6.2f\n", gpsData->speed, gpsData->course);

	curr_gps.latitude = gpsData->latitude;	
	curr_gps.longitude = gpsData->longitude;
	curr_gps.course = gpsData->course;
	curr_gps.speed = gpsData->speed;
	curr_gps.altitude = gpsData->altitude;
	curr_gps.fix = gpsData->fix;
}*/


/*void parseVehicleData(char *msg) {
    char* saveptr = NULL;

    VehicleData vehData;
    vehData_initVehicleData(&vehData);

	char *data = strtok_r(msg,"{:", &saveptr);

	while(data != NULL) {
		if(strcmp(data,"\"rpm\"")== 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.rpm = atof(data);
		} else if(strcmp(data,"\"spd\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.speed = atoi(data) * 0.277777777778;
		} else if(strcmp(data,"\"pres\"")== 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.barometric_pressure = (((atol(data)*10) /580) + .5);
		} else if(strcmp(data,"\"maf\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.maf = atof(data);
		} else if(strcmp(data,"\"airtemp\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.external_air_temperature = atol(data) + 40;
		} else if(strcmp(data,"\"throttle\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.throttle = atol(data);
		} else if(strcmp(data,"\"time\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.time = atoi(data);
		}  else if(strcmp(data,"\"location\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.location = atoi(data);
		} else if(strcmp(data,"\"heading\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.heading = atoi(data);
		}else if(strcmp(data,"\"lateral_acceleration\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.lateral_acceleration = atol(data);
		} else if(strcmp(data,"\"longitudinal_acceleration\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.longitudinal_acceleration = atol(data);
		}  else if(strcmp(data,"\"yaw_rate\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.yaw_rate = atol(data);
		} else if(strcmp(data,"\"rate_of_change_of_steering_wheel\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr);
			vehData.rate_of_change_of_steering_wheel = atol(data); 
		}else if(strcmp(data,"\"brake_status\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.brake_status = atoi(data);
		} else if(strcmp(data,"\"impact_sensor_status\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.impact_sensor_status = atoi(data);
		} else if(strcmp(data,"\"anti_lock_braking_status\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.anti_lock_braking_status = atoi(data);
		} else if(strcmp(data,"\"wiper_status\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.wiper_status = atoi(data);
		} else if(strcmp(data,"\"headlight_status\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.headlight_status = atoi(data);
		} else if(strcmp(data,"\"traction_control_status\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.traction_control_status = atoi(data);
		} else if(strcmp(data,"\"differential_wheel_speed\"") == 0) {
			data = strtok_r(NULL,":,}", &saveptr); 
			vehData.differential_wheel_speed = atoi(data);
		}
		data = strtok_r(NULL,":,}", &saveptr);
	}

	vehData_setVehicleData(&vehData);
}*/

/*void parseTIMData(TravelerInformation_t * tim, char *msg) {
	asn_codec_ctx_t *opt_codec_ctx = 0;
	unsigned char bytearray[5000];

	char* saveptr = NULL;
	
	char *data = strtok_r(msg,"{:\"", &saveptr);
	while(data != NULL) {
		if(strcmp(data,"\"payload\"") == 0) {
			data = strtok_r(NULL,"\",}", &saveptr);

			int bytecount = strlen(data)/2;
			int i;
			for(i = 0; i < bytecount; i++) {
				sscanf(data+(2*i),"%2hhx",&bytearray[i]);
			}

			asn_dec_rval_t rval = ber_decode(NULL, &asn_DEF_TravelerInformation, (void **)&tim, bytearray, bytecount);
			
			//asn_fprint(stdout, &asn_DEF_TravelerInformation, tim);
			
		}
		data = strtok_r(NULL,":,}", &saveptr);
	}
}*/
