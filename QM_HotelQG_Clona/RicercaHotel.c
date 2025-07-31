//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaHotel()
{
	truclient_step("2", "Click on Codice TextBox", "snapshot=RicercaHotel_2.inf");
	truclient_step("3", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaHotel_3.inf");
	truclient_step("5", "Click on Cerca hotel Button", "snapshot=RicercaHotel_5.inf");
	return 0;
}
