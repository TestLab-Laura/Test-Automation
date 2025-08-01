//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Stagionalita()
{
	truclient_step("2", "Click on Stagionalità Link", "snapshot=Stagionalita_2.inf");
	truclient_step("4", "Click on Aggiungi Button", "snapshot=Stagionalita_4.inf");
	truclient_step("6", "Click on Aggiungi intervallo di... Focusable", "snapshot=Stagionalita_6.inf");
	truclient_step("12", "Click on Fino a TextBox", "snapshot=Stagionalita_12.inf");
	truclient_step("14", "Click on 27 Button", "snapshot=Stagionalita_14.inf");
	truclient_step("16", "Click on Aggiungi intervallo date Button", "snapshot=Stagionalita_16.inf");
	return 0;
}
