//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaServizio()
{
	truclient_step("1", "Click on Servizi Link", "snapshot=RicercaServizio_1.inf");
	truclient_step("3", "Cerca servizi", "snapshot=RicercaServizio_3.inf");
	{
		truclient_step("3.1", "Click on Codice TextBox", "snapshot=RicercaServizio_3.1.inf");
		truclient_step("3.2", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaServizio_3.2.inf");
		truclient_step("3.3", "Click on Cerca servizi Button", "snapshot=RicercaServizio_3.3.inf");
	}
	return 0;
}
