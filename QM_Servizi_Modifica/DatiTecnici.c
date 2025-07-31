//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

DatiTecnici()
{
	truclient_step("2", "Click on Dati tecnici Link", "snapshot=DatiTecnici_2.inf");
	truclient_step("4", "Click on Massimo passeggeri TextBox", "snapshot=DatiTecnici_4.inf");
	truclient_step("5", "Type 6 in Massimo passeggeri TextBox", "snapshot=DatiTecnici_5.inf");
	truclient_step("7", "Click on Label(Teen - Abilita) Label", "snapshot=DatiTecnici_7.inf");
	truclient_step("9", "Click on Conferma modifiche Button", "snapshot=DatiTecnici_9.inf");
	truclient_step("11", "Click on Aggiungi nuovo dato Button", "snapshot=DatiTecnici_11.inf");
	truclient_step("13", "Click on Demo Simple Select Focusable", "snapshot=DatiTecnici_13.inf");
	truclient_step("14", "Click on Autista ListItem", "snapshot=DatiTecnici_14.inf");
	truclient_step("16", "Type L'autista parla italiano in Traduci nelle altre lingu... TextBox", "snapshot=DatiTecnici_16.inf");
	truclient_step("18", "Click on Conferma Button", "snapshot=DatiTecnici_18.inf");
	return 0;
}
