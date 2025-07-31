//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CamerePasti()
{
	truclient_step("2", "Click on Camere e pasti Link", "snapshot=CamerePasti_2.inf");
	truclient_step("3", "GroupStep.Mouseover", "snapshot=CamerePasti_3.inf");
	{
		truclient_step("3.4", "Move mouse over 10 prime colazioni +... ListItem", "snapshot=CamerePasti_3.4.inf");
	}
	truclient_step("4", "Click on Button(+ 10 prime colazioni + 5 pranzi + 5 cene) Button", "snapshot=CamerePasti_4.inf");
	truclient_step("9", "Click on Conferma modifiche Button", "snapshot=CamerePasti_9.inf");
	return 0;
}
