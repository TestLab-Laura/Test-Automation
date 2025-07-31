//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Login()
{
	truclient_step("1", "Navigate to https://aladyn2.torino.q...enge_method=S256", "snapshot=Login_1.inf");
	truclient_step("2", "Entra", "snapshot=Login_2.inf");
	{
		truclient_step("2.1", "Click on Login TextBox", "snapshot=Login_2.1.inf");
		truclient_step("2.2", "Type partec.latitud in Login TextBox", "snapshot=Login_2.2.inf");
		truclient_step("2.3", "Type ****** in Password PasswordBox", "snapshot=Login_2.3.inf");
		truclient_step("2.4", "Click on Entra Button", "snapshot=Login_2.4.inf");
	}
	truclient_step("4", "Wait until Latitud Patagonia Image exists", "snapshot=Login_4.inf");
	truclient_step("6", "Click on Button(5) Button", "snapshot=Login_6.inf");
	truclient_step("8", "Verify if PL Element's VisibleText Contain PL", "snapshot=Login_8.inf");
	return 0;
}
