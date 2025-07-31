//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Media()
{
	truclient_step("2", "Click on Media Link", "snapshot=Media_2.inf");
	truclient_step("4", "Verify if Inserisci Documento Button's VisibleText Contain Inserisci Documento", "snapshot=Media_4.inf");
	truclient_step("5", "Verify if Inserisci Pagina Web Button's VisibleText Contain Inserisci Pagina Web", "snapshot=Media_5.inf");
	truclient_step("6", "Verify if Inserisci Link a Video Button's VisibleText Contain Inserisci Link a Video", "snapshot=Media_6.inf");
	return 0;
}
