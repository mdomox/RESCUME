//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace INCZONE.Model
{
    using System;
    using System.Collections.Generic;

    public partial class EventLog : Interfaces.IEntity
    {
        public int Id { get; set; }
        public string EventMessage { get; set; }
        public System.DateTime EventDate { get; set; }
        public int EventType_Id { get; set; }
        public int LogLevel_Id { get; set; }
        public string EventInfo { get; set; }
    
        public virtual EventType EventType { get; set; }
        public virtual LogLevel LogLevel { get; set; }
    }
}