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

    public partial class AudibleVisualAlarm : Interfaces.IEntity
    {
        public int Id { get; set; }
        public string Duration { get; set; }
        public string Frequency { get; set; }
        public int AlarmLevel_Id { get; set; }
        public int AlarmConfiguration_Id { get; set; }
        public int Persistance { get; set; }
        public bool RadioActive { get; set; }
    
        public virtual AlarmConfiguration AlarmConfiguration { get; set; }
        public virtual AlarmLevel AlarmLevel { get; set; }
    }
}
