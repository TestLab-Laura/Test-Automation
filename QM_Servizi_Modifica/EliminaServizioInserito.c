//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

EliminaServizioInserito()
{
	truclient_step("2", "Click on Servizi Link", "snapshot=EliminaServizioInserito_2.inf");
	truclient_step("7", "Click on Codice TextBox", "snapshot=EliminaServizioInserito_7.inf");
	truclient_step("8", "Type Partec_Inserime in Codice TextBox", "snapshot=EliminaServizioInserito_8.inf");
	truclient_step("10", "Cerca servizi", "snapshot=EliminaServizioInserito_10.inf");
	{
		truclient_step("10.1", "Click on Compila almeno un campo... Element", "snapshot=EliminaServizioInserito_10.1.inf");
		truclient_step("10.2", "Click on Cerca servizi Button", "snapshot=EliminaServizioInserito_10.2.inf");
	}
	truclient_step("12", "Click on Element(Seleziona) Element", "snapshot=EliminaServizioInserito_12.inf");
	truclient_step("14", "Click on Elimina 1 servizio Button", "snapshot=EliminaServizioInserito_14.inf");
	truclient_step("16", "Click on Elimina selezionati Button", "snapshot=EliminaServizioInserito_16.inf");
	truclient_step("18", "Click on Cerca servizi Button", "snapshot=EliminaServizioInserito_18.inf");
	truclient_step("21", "Verify if Nessun servizio trovato... Element's VisibleText Contain Nessun servizio trovato ...ltri selezionati", "snapshot=EliminaServizioInserito_21.inf");
	return 0;
}
