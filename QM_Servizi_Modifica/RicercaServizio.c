//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaServizio()
{
	truclient_step("1", "Click on Element(1) Element", "snapshot=RicercaServizio_1.inf");
	truclient_step("3", "Click on Servizi Link", "snapshot=RicercaServizio_3.inf");
	truclient_step("5", "Click on Codice TextBox", "snapshot=RicercaServizio_5.inf");
	truclient_step("6", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaServizio_6.inf");
	truclient_step("8", "Click on Cerca servizi Button", "snapshot=RicercaServizio_8.inf");
	truclient_step("9", "GroupStep.Mouseover", "snapshot=RicercaServizio_9.inf");
	{
		truclient_step("9.5", "Move mouse over Partec Inserime Partec... Element", "snapshot=RicercaServizio_9.5.inf");
	}
	truclient_step("10", "Click on Partec Inserime Link", "snapshot=RicercaServizio_10.inf");
	return 0;
}
