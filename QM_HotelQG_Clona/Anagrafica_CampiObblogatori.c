//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Anagrafica_CampiObblogatori()
{
	truclient_step("2", "Click on Conferma modifiche Button", "snapshot=Anagrafica_CampiObblogatori_2.inf");
	truclient_step("3", "Verify if Catalogo - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObblogatori_3.inf");
	truclient_step("4", "Verify if Codice - Il campo deve contenere... Element's VisibleText Contain Il campo deve contenere ...meno 3 caratteri", "snapshot=Anagrafica_CampiObblogatori_4.inf");
	truclient_step("5", "Verify if Nome - Il campo deve contenere... Element's VisibleText Contain Il campo deve contenere ...meno 2 caratteri", "snapshot=Anagrafica_CampiObblogatori_5.inf");
	truclient_step("6", "Verify if Tipo visibilità - Il campo deve contenere... Element's VisibleText Contain Il campo deve contenere ...lmeno 1 elemento", "snapshot=Anagrafica_CampiObblogatori_6.inf");
	truclient_step("7", "Verify if Paese - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObblogatori_7.inf");
	truclient_step("8", "Verify if Città - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObblogatori_8.inf");
	truclient_step("9", "Verify if Indirizzo - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObblogatori_9.inf");
	return 0;
}
