//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

ClonaServizio()
{
	truclient_step("2", "Click on Button(Clona) Button", "snapshot=ClonaServizio_2.inf");
	truclient_step("4", "Click on Codice * TextBox", "snapshot=ClonaServizio_4.inf");
	truclient_step("5", "Type Clona_Partec_In in Codice * TextBox", "snapshot=ClonaServizio_5.inf");
	truclient_step("7", "Click on Clona Button", "snapshot=ClonaServizio_7.inf");
	return 0;
}
