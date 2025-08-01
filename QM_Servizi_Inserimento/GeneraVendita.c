//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

GeneraVendita()
{
	truclient_step("6", "Click on Costi Link", "snapshot=GeneraVendita_6.inf");
	truclient_step("8", "Click on Genera vendita Button", "snapshot=GeneraVendita_8.inf");
	truclient_step("9", "GroupStep.Mouseover", "snapshot=GeneraVendita_9.inf");
	{
		truclient_step("9.1", "Move mouse over RadioGroup(2) RadioGroup", "snapshot=GeneraVendita_9.1.inf");
	}
	truclient_step("10", "Click on Genera vendita RadioGroup", "snapshot=GeneraVendita_10.inf");
	truclient_step("12", "Click on Genera vendita Button", "snapshot=GeneraVendita_12.inf");
	truclient_step("14", "Verify if € 134,00 Element's VisibleText Contain € 134,00", "snapshot=GeneraVendita_14.inf");
	truclient_step("15", "Verify if € 0,00 Element's VisibleText Contain € 0,00", "snapshot=GeneraVendita_15.inf");
	truclient_step("16", "Verify if € 67,00 Element's VisibleText Contain € 67,00", "snapshot=GeneraVendita_16.inf");
	truclient_step("17", "Verify if € 107,20 Element's VisibleText Contain € 107,20", "snapshot=GeneraVendita_17.inf");
	return 0;
}
