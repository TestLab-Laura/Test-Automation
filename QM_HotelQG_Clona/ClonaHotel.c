//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

ClonaHotel()
{
	truclient_step("2", "Click on Button(Clona) Button", "snapshot=ClonaHotel_2.inf");
	truclient_step("4", "Click on Codice * TextBox", "snapshot=ClonaHotel_4.inf");
	truclient_step("5", "Type Clona_Partec_In in Codice * TextBox", "snapshot=ClonaHotel_5.inf");
	truclient_step("7", "Click on Clona Button", "snapshot=ClonaHotel_7.inf");
	return 0;
}
