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

    public partial class DGPSConfiguration : Interfaces.IEntity
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Username { get; set; }
        public string Password { get; set; }
        public string HostIP { get; set; }
        public string HostPort { get; set; }
        public int RefreshRate { get; set; }
        public bool IsDefault { get; set; }
        public int LocationRefreshRate { get; set; }
    }
}
