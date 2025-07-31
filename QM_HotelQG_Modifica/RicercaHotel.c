//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaHotel()
{
	truclient_step("5", "Click on Element(1) Element", "snapshot=RicercaHotel_5.inf");
	truclient_step("6", "Click on Codice TextBox", "snapshot=RicercaHotel_6.inf");
	truclient_step("7", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaHotel_7.inf");
	truclient_step("9", "Click on Cerca hotel Button", "snapshot=RicercaHotel_9.inf");
	truclient_step("11", "Click on Partec Inserime Link", "snapshot=RicercaHotel_11.inf");
	return 0;
}
