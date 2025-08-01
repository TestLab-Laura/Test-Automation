//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Descrizione()
{
	truclient_step("1", "Click on Descrizione Link", "snapshot=Descrizione_1.inf");
	truclient_step("2", "Click on Scheda tecnicaAnagraficaDescrizioneMediaScheda... TextBox", "snapshot=Descrizione_2.inf");
	truclient_step("3", "Type prova in Scheda tecnicaAnagraficaDescrizioneMediaScheda... TextBox", "snapshot=Descrizione_3.inf");
	truclient_step("5", "Click on Traduci nelle altre lingu... Button", "snapshot=Descrizione_5.inf");
	truclient_step("6", "GroupStep.Mouseover", "snapshot=Descrizione_6.inf");
	{
		truclient_step("6.1", "Move mouse over Focusable(1) Focusable", "snapshot=Descrizione_6.1.inf");
	}
	truclient_step("7", "Click on Ok Button", "snapshot=Descrizione_7.inf");
	truclient_step("9", "Click on Francese Button", "snapshot=Descrizione_9.inf");
	truclient_step("11", "Verify if evidence TextBox's VisibleText Contain preuve", "snapshot=Descrizione_11.inf");
	truclient_step("16", "Click on Scheda tecnicaAnagraficaDescrizioneMediaScheda... TextBox", "snapshot=Descrizione_16.inf");
	truclient_step("17", "Type prova in Scheda tecnicaAnagraficaDescrizioneMediaScheda... TextBox", "snapshot=Descrizione_17.inf");
	truclient_step("19", "Click on Inglese Button", "snapshot=Descrizione_19.inf");
	truclient_step("25", "Click on Traduci dall'italiano Button", "snapshot=Descrizione_25.inf");
	truclient_step("26", "GroupStep.Mouseover", "snapshot=Descrizione_26.inf");
	{
		truclient_step("26.1", "Move mouse over Focusable(1) Focusable", "snapshot=Descrizione_26.1.inf");
	}
	truclient_step("27", "Click on Ok Button", "snapshot=Descrizione_27.inf");
	truclient_step("28", "Verify if evidence TextBox's VisibleText Contain evidence", "snapshot=Descrizione_28.inf");
	truclient_step("29", "Click on Conferma modifiche Button", "snapshot=Descrizione_29.inf");
	return 0;
}
