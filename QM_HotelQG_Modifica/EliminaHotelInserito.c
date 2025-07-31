//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

EliminaHotelInserito()
{
	truclient_step("2", "Click on Quality Group Link", "snapshot=EliminaHotelInserito_2.inf");
	truclient_step("4", "Click on Codice TextBox", "snapshot=EliminaHotelInserito_4.inf");
	truclient_step("6", "Type Partec_Inserime in Codice TextBox", "snapshot=EliminaHotelInserito_6.inf");
	truclient_step("8", "Click on Cerca hotel Button", "snapshot=EliminaHotelInserito_8.inf");
	truclient_step("9", "GroupStep.Mouseover", "snapshot=EliminaHotelInserito_9.inf");
	{
		truclient_step("9.4", "Move mouse over Partec Inserime Partec... Element", "snapshot=EliminaHotelInserito_9.4.inf");
	}
	truclient_step("10", "Click on Element(Seleziona) Element", "snapshot=EliminaHotelInserito_10.inf");
	truclient_step("12", "Click on Elimina 1 hotel Button", "snapshot=EliminaHotelInserito_12.inf");
	truclient_step("14", "Click on Elimina selezionati Button", "snapshot=EliminaHotelInserito_14.inf");
	truclient_step("16", "Click on Cerca hotel Button", "snapshot=EliminaHotelInserito_16.inf");
	truclient_step("19", "Verify if Nessun hotel trovato... Element's VisibleText Contain Nessun hotel trovato cor...ltri selezionati", "snapshot=EliminaHotelInserito_19.inf");
	return 0;
}
