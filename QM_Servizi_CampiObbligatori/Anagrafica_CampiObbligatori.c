//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Anagrafica_CampiObbligatori()
{
	truclient_step("2", "Click on Conferma modifiche Button", "snapshot=Anagrafica_CampiObbligatori_2.inf");
	truclient_step("4", "Verify if Catalogo - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObbligatori_4.inf");
	truclient_step("5", "Verify if Codice - Il campo deve contenere... Element's VisibleText Contain Il campo deve contenere ...meno 3 caratteri", "snapshot=Anagrafica_CampiObbligatori_5.inf");
	truclient_step("6", "Verify if Tipo viaggio - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObbligatori_6.inf");
	truclient_step("7", "Verify if Nome - Il campo deve contenere... Element's VisibleText Contain Il campo deve contenere ...lmeno 1 elemento", "snapshot=Anagrafica_CampiObbligatori_7.inf");
	truclient_step("8", "Verify if Tipo visibilità - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObbligatori_8.inf");
	truclient_step("9", "Verify if Tipo servizio - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObbligatori_9.inf");
	truclient_step("10", "Verify if Paese - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObbligatori_10.inf");
	truclient_step("11", "Verify if Città - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_CampiObbligatori_11.inf");
	return 0;
}
