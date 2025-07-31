//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Logout()
{
	truclient_step("2", "Click on Button(6) Button", "snapshot=Logout_2.inf");
	truclient_step("4", "Click on Log out Focusable", "snapshot=Logout_4.inf");
	return 0;
}
