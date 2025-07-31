//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CamerePasti()
{
	truclient_step("2", "Click on Camere e pasti Link", "snapshot=CamerePasti_2.inf");
	truclient_step("4", "Click on Button(+ Waterhole Chalet) Button", "snapshot=CamerePasti_4.inf");
	truclient_step("6", "Click on Button(+ 1 cena, prima colazione, 1 pranzo) Button", "snapshot=CamerePasti_6.inf");
	truclient_step("8", "Click on Conferma modifiche Button", "snapshot=CamerePasti_8.inf");
	truclient_step("10", "Verify if Waterhole Chalet Button's VisibleText Contain  Waterhole Chalet", "snapshot=CamerePasti_10.inf");
	truclient_step("11", "Verify if 1 cena, prima colazione,... Button's VisibleText Contain 1 cena, prima colazione, 1 pranzo", "snapshot=CamerePasti_11.inf");
	return 0;
}
