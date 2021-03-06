TITLE                                   PlanSum Default Control Keys
REPORT_DIRECTORY                        
REPORT_FILE                                                     //---- [report_directory]filename[_partition][.prn]
REPORT_FLAG                             FALSE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
PAGE_LENGTH                             32767                      //---- >= 0
PROJECT_DIRECTORY                       
DEFAULT_FILE_FORMAT                     TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TIME_OF_DAY_FORMAT                      DAY_TIME                //---- SECONDS, MINUTES, HOURS, HOUR_CLOCK, DAY_TIME, TIME_CODE, HOUR_MINUTE
MODEL_START_TIME                        0:00                    //---- >= 0 [seconds], 0.0 [hours], 0:00
MODEL_END_TIME                          60:00                   //---- > [model_start_time]
MODEL_TIME_INCREMENT                    15 minutes              //---- 0, 2..240 minutes
UNITS_OF_MEASURE                        METRIC                 //---- METRIC, ENGLISH
DRIVE_SIDE_OF_ROAD                      RIGHT_SIDE              //---- RIGHT_SIDE, LEFT_SIDE
RANDOM_NUMBER_SEED                      0                       //---- 0 = computer clock, > 0 = fixed
MAX_WARNING_MESSAGES                    100000                  //---- >= 0
MAX_WARNING_EXIT_FLAG                   TRUE                    //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
MAX_PROBLEM_COUNT                       0                       //---- >= 0
NUMBER_OF_THREADS                       1                       //---- 1..128

#---- System File Keys ----

PLAN_FILE                               Demand\Plans_TRN_BASE                        //---- [project_directory]filename.*
PLAN_FORMAT                             TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
NODE_FILE                               ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Node.csv                        //---- [project_directory]filename
NODE_FORMAT                             TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
LINK_FILE                               ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Link.csv                        //---- [project_directory]filename
LINK_FORMAT                             TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
CONNECTION_FILE                         ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Connection.csv                        //---- [project_directory]filename
CONNECTION_FORMAT                       TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
LOCATION_FILE                           ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Location.csv                        //---- [project_directory]filename
LOCATION_FORMAT                         TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
POCKET_FILE                             ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Pocket.csv                        //---- [project_directory]filename
POCKET_FORMAT                           TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
LANE_USE_FILE                           ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\LaneUse.csv                        //---- [project_directory]filename
LANE_USE_FORMAT                         TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TURN_PENALTY_FILE                                               //---- [project_directory]filename
TURN_PENALTY_FORMAT                     TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
PARKING_FILE                            ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Parking.csv                        //---- [project_directory]filename
PARKING_FORMAT                          TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
ACCESS_FILE                             ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Access.csv                        //---- [project_directory]filename
ACCESS_FORMAT                           TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TRANSIT_STOP_FILE                       ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Transit_Stop.csv                        //---- [project_directory]filename
TRANSIT_STOP_FORMAT                     TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TRANSIT_FARE_FILE                                               //---- [project_directory]filename
TRANSIT_FARE_FORMAT                     TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TRANSIT_ROUTE_FILE                      ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Transit_Route.csv                        //---- [project_directory]filename
TRANSIT_ROUTE_FORMAT                    TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TRANSIT_SCHEDULE_FILE                   ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Transit_Schedule.csv                        //---- [project_directory]filename
TRANSIT_SCHEDULE_FORMAT                 TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TRANSIT_DRIVER_FILE                     ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Transit_Driver.csv                        //---- [project_directory]filename
TRANSIT_DRIVER_FORMAT                   TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
SELECTION_FILE                                                  //---- [project_directory]filename.*
SELECTION_FORMAT                        TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
VEHICLE_TYPE_FILE                       ..\..\Common_Inputs\1_Network_v6\ASCIIFiles\Vehicle_Type.csv                        //---- [project_directory]filename
VEHICLE_TYPE_FORMAT                     TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
PERFORMANCE_FILE                                                //---- [project_directory]filename
PERFORMANCE_FORMAT                      TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
TURN_DELAY_FILE                                                 //---- [project_directory]filename
TURN_DELAY_FORMAT                       TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
## NEW_PERFORMANCE_FILE                    Results\Router_Hwy_LinkPerformance_BASE.0                        //---- [project_directory]filename
NEW_PERFORMANCE_FORMAT                  TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
## NEW_TURN_DELAY_FILE                     Results\Router_Hwy_TurnDelay_BASE.0                        //---- [project_directory]filename
NEW_TURN_DELAY_FORMAT                   TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
NEW_RIDERSHIP_FILE                                              //---- [project_directory]filename
NEW_RIDERSHIP_FORMAT                    TAB_DELIMITED           //---- TEXT, BINARY, FIXED_COLUMN, COMMA_DELIMITED, SPACE_DELIMITED, TAB_DELIMITED, CSV_DELIMITED, DBASE, ARCVIEW, SQLITE3, VERSION3, TPPLUS, CUBE
NOTES_AND_NAME_FIELDS                   FALSE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
SAVE_LANE_USE_FLOWS                     FALSE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
ZONE_EQUIVALENCE_FILE                                           //---- [project_directory]filename
LINK_EQUIVALENCE_FILE                                           //---- [project_directory]filename
STOP_EQUIVALENCE_FILE                                           //---- [project_directory]filename
LINE_EQUIVALENCE_FILE                                           //---- [project_directory]filename

#---- Data Service Keys ----

DAILY_WRAP_FLAG                         FALSE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
SUMMARY_TIME_RANGES                     ALL                     //---- e.g., ALL, 0..97200 seconds, 0.0..27.0 hours, 0:00..27:00
SUMMARY_TIME_INCREMENT                  60 minutes              //---- 0, 2..240 minutes
PERIOD_CONTROL_POINT                    MID-TRIP                //---- START, END, MID-TRIP

#---- Select Service Keys ----

SELECT_HOUSEHOLDS                       ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_MODES                            ALL                     //---- e.g., ALL or 1, 12..14 or WALK, HOV2..HOV4
SELECT_PURPOSES                         ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_START_TIMES                      ALL                     //---- e.g., ALL, 0..97200 seconds, 0.0..27.0 hours, 0:00..27:00
SELECT_END_TIMES                        ALL                     //---- e.g., ALL, 0..97200 seconds, 0.0..27.0 hours, 0:00..27:00
SELECT_ORIGINS                          ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_DESTINATIONS                     ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_VEHICLE_TYPES                    ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_TRAVELER_TYPES                   ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_LINKS_1                          ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_NODES_1                          ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_SUBAREAS                                                 //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_STOPS                            ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECT_ROUTES                           ALL                     //---- e.g., 1, 2, 4..10, 100..200, 300
SELECTION_POLYGON                                               //---- [project_directory]filename
SELECTION_PERCENTAGE                    100.0 percent           //---- 0.01..100.0 percent

#---- Flow-Time Service Keys ----

UPDATE_FLOW_RATES                       TRUE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
CLEAR_INPUT_FLOW_RATES                  TRUE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
UPDATE_TURNING_MOVEMENTS                TRUE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
UPDATE_TRAVEL_TIMES                     TRUE                   //---- TRUE/FALSE, YES/NO, 1/0, T/F, Y/N
LINK_FLOW_FACTOR                        1.0                     //---- 1..100000

## VDOT
EQUATION_PARAMETERS_1                             CONICAL,   2, 50             //  1 => FREEWAY                 Conical VDF A=Alpha, B=MaxTTI
## EQUATION_PARAMETERS_1                             FLOW_DENSITY,   1, 1, 2             //  1 => FREEWAY                 Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_2                             CONICAL,    2, 50             //  2 => EXPRESSWAY              Conical VDF A=Alpha, B=MaxTTI
## EQUATION_PARAMETERS_2                             FLOW_DENSITY,   1, 1, 2             //  2 => EXPRESSWAY              Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_4                             CONICAL,    2, 50             //  4 => MAJOR                   Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_4                             FLOW_DENSITY,   1, 1, 2             //  4 => MAJOR                   Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_5                             CONICAL,  5.5, 50             //  5 => MINOR                   Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_6                             CONICAL,    3, 50             //  6 => COLLECTOR               Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_10                            CONICAL,   4, 50             // 10 => RAMP                    Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_11                            CONICAL,    4, 50             // 11 => BRIDGE  =  MAJOR        Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_12                            CONICAL,    8, 50             // 12 => TUNNEL  =  EXPRESSWAY   Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_13                            CONICAL,  5.5, 50             // 13 => OTHER   =  MINOR        Conical VDF A=Alpha, B=MaxTTI
EQUATION_PARAMETERS_20                            BPR,     0.01,  1, 1          // 20 => EXTERNAL                    BPR VDF A=Alpha, B=Beta,   C=Gamma,  D=MaxV/C


#---- PlanSum Control Keys ----

NEW_TRIP_TIME_FILE                                              //---- [project_directory]filename
NEW_LINK_VOLUME_FILE                                            //---- [project_directory]filename
NEW_LINK_VOLUME_FORMAT				  COMMA_DELIMITED
NEW_ACCESS_DETAIL_FILE                                          //---- [project_directory]filename
NEW_ACCESS_GROUP_FILE                                           //---- [project_directory]filename
NEW_STOP_DIURNAL_FILE                                           //---- [project_directory]filename
NEW_LINE_ON_OFF_FILE                                            //---- [project_directory]filename
NEW_STOP_BOARDING_FILE                                          //---- [project_directory]filename

#---- Program Report Keys ----

PLANSUM_REPORT_1                       TRIP_TIME_REPORT                         //---- program report name
PLANSUM_REPORT_2                       TRAVEL_SUMMARY_REPORT                         //---- program report name
                                                                //---- TOP_100_V/C_RATIOS
                                                                //---- ALL_V/C_RATIOS_GREATER_THAN_*
                                                                //---- LINK_GROUP_V/C_RATIOS_*
                                                                //---- ZONE_EQUIVALENCE
                                                                //---- LINK_EQUIVALENCE
                                                                //---- STOP_EQUIVALENCE
                                                                //---- LINE_EQUIVALENCE
                                                                //---- TRANSIT_RIDERSHIP_SUMMARY
                                                                //---- TRANSIT_STOP_SUMMARY
                                                                //---- TRANSIT_TRANSFER_SUMMARY
                                                                //---- TRANSIT_TRANSFER_DETAILS
                                                                //---- TRANSIT_STOP_GROUP_SUMMARY
                                                                //---- TRANSIT_STOP_GROUP_DETAILS
                                                                //---- TRANSIT_LINE_GROUP_SUMMARY
                                                                //---- TRANSIT_LINE_GROUP_DETAILS
                                                                //---- TRANSIT_PASSENGER_SUMMARY
                                                                //---- TRANSIT_LINK_GROUP_SUMMARY
                                                                //---- LINE_TO_LINE_TRANSFERS
                                                                //---- STOP_GROUP_ACCESS_DETAILS
                                                                //---- TRIP_TIME_REPORT
                                                                //---- TRAVEL_SUMMARY_REPORT
