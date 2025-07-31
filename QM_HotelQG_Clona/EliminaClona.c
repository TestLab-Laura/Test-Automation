//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

EliminaClona()
{
	truclient_step("2", "Click on Codice TextBox", "snapshot=EliminaClona_2.inf");
	truclient_step("3", "Type Clona_Partec_In in Codice TextBox", "snapshot=EliminaClona_3.inf");
	truclient_step("6", "Click on Cerca hotel Button", "snapshot=EliminaClona_6.inf");
	truclient_step("8", "Click on Cerca hotel Button", "snapshot=EliminaClona_8.inf");
	truclient_step("9", "GroupStep.Mouseover", "snapshot=EliminaClona_9.inf");
	{
		truclient_step("9.3", "Move mouse over Clona Partec In Partec... Element", "snapshot=EliminaClona_9.3.inf");
	}
	truclient_step("10", "Click on Element(Seleziona) Element", "snapshot=EliminaClona_10.inf");
	truclient_step("12", "Click on Elimina 1 hotel Button", "snapshot=EliminaClona_12.inf");
	truclient_step("14", "Click on Elimina selezionati Button", "snapshot=EliminaClona_14.inf");
	truclient_step("16", "Click on Cerca hotel Button", "snapshot=EliminaClona_16.inf");
	truclient_step("18", "Verify if Nessun hotel trovato... Element's VisibleText Contain Nessun hotel trovato cor...ltri selezionati", "snapshot=EliminaClona_18.inf");
	return 0;
}
