//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

EliminaClona()
{
	truclient_step("3", "Click on Servizi Link", "snapshot=EliminaClona_3.inf");
	truclient_step("5", "Click on Codice TextBox", "snapshot=EliminaClona_5.inf");
	truclient_step("6", "Type Clona_Partec_In in Codice TextBox", "snapshot=EliminaClona_6.inf");
	truclient_step("8", "Click on Cerca servizi Button", "snapshot=EliminaClona_8.inf");
	truclient_step("10", "Click on Element(Seleziona) Element", "snapshot=EliminaClona_10.inf");
	truclient_step("12", "Click on Elimina 1 servizio Button", "snapshot=EliminaClona_12.inf");
	truclient_step("13", "GroupStep.Mouseover", "snapshot=EliminaClona_13.inf");
	{
		truclient_step("13.1", "Move mouse over Focusable(8) Focusable", "snapshot=EliminaClona_13.1.inf");
	}
	truclient_step("14", "Click on Elimina selezionati Button", "snapshot=EliminaClona_14.inf");
	truclient_step("16", "Click on Cerca servizi Button", "snapshot=EliminaClona_16.inf");
	truclient_step("25", "Verify if Nessun servizio trovato... Element's VisibleText Contain Nessun servizio trovato ...ltri selezionati", "snapshot=EliminaClona_25.inf");
	return 0;
}
