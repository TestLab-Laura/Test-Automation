//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Descrizione()
{
	truclient_step("1", "Click on Descrizione Link", "snapshot=Descrizione_1.inf");
	truclient_step("17", "Click on Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_17.inf");
	truclient_step("18", "Type prova in Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_18.inf");
	truclient_step("20", "Click on Traduci nelle altre lingu... Button", "snapshot=Descrizione_20.inf");
	truclient_step("21", "GroupStep.Mouseover", "snapshot=Descrizione_21.inf");
	{
		truclient_step("21.1", "Move mouse over Focusable(11) Focusable", "snapshot=Descrizione_21.1.inf");
	}
	truclient_step("22", "Click on Ok Button", "snapshot=Descrizione_22.inf");
	truclient_step("24", "Click on Inglese Button", "snapshot=Descrizione_24.inf");
	truclient_step("26", "Verify if evidence TextBox's VisibleText Contain evidence", "snapshot=Descrizione_26.inf");
	truclient_step("28", "Click on Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_28.inf");
	truclient_step("29", "Type prova in Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_29.inf");
	truclient_step("31", "Click on Traduci nelle altre lingu... Button", "snapshot=Descrizione_31.inf");
	truclient_step("32", "GroupStep.Mouseover", "snapshot=Descrizione_32.inf");
	{
		truclient_step("32.1", "Move mouse over Focusable(12) Focusable", "snapshot=Descrizione_32.1.inf");
	}
	truclient_step("33", "Click on Ok Button", "snapshot=Descrizione_33.inf");
	truclient_step("35", "Click on Francese Button", "snapshot=Descrizione_35.inf");
	truclient_step("36", "Verify if preuve TextBox's VisibleText Contain preuve", "snapshot=Descrizione_36.inf");
	truclient_step("37", "Click on Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_37.inf");
	truclient_step("38", "Type prova in Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_38.inf");
	truclient_step("40", "Click on Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_40.inf");
	truclient_step("41", "Type prova in Scheda tecnicaAnagraficaDati... TextBox", "snapshot=Descrizione_41.inf");
	truclient_step("43", "Click on Button(88) Button", "snapshot=Descrizione_43.inf");
	truclient_step("45", "Click on Conferma modifiche Button", "snapshot=Descrizione_45.inf");
	return 0;
}
