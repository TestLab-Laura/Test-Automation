//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaServizioModificato()
{
	truclient_step("2", "Click on Servizi Link", "snapshot=RicercaServizioModificato_2.inf");
	truclient_step("4", "Click on Codice TextBox", "snapshot=RicercaServizioModificato_4.inf");
	truclient_step("6", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaServizioModificato_6.inf");
	truclient_step("9", "Click on Cerca servizi Button", "snapshot=RicercaServizioModificato_9.inf");
	truclient_step("11", "Click on Partec Inserime Link", "snapshot=RicercaServizioModificato_11.inf");
	truclient_step("14", "Verify if Argentina e Cile Focusable's VisibleText Contain Argentina e Cile", "snapshot=RicercaServizioModificato_14.inf");
	truclient_step("15", "Verify if Codice * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaServizioModificato_15.inf");
	truclient_step("16", "Verify if Individuale Focusable's VisibleText Contain Individuale", "snapshot=RicercaServizioModificato_16.inf");
	truclient_step("17", "Verify if Nome * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaServizioModificato_17.inf");
	truclient_step("18", "Verify if Flexy NY Button's VisibleText Contain Flexy NY", "snapshot=RicercaServizioModificato_18.inf");
	truclient_step("19", "Verify if Trasferimento Focusable's VisibleText Contain Trasferimento", "snapshot=RicercaServizioModificato_19.inf");
	truclient_step("20", "Verify if Paese * TextBox's VisibleText Contain Argentina", "snapshot=RicercaServizioModificato_20.inf");
	truclient_step("21", "Verify if Città * TextBox's VisibleText Contain Buenos Aires (1363), AR-BA", "snapshot=RicercaServizioModificato_21.inf");
	truclient_step("23", "Click on Dati tecnici Link", "snapshot=RicercaServizioModificato_23.inf");
	truclient_step("25", "Verify if Massimo passeggeri TextBox's VisibleText Contain 6", "snapshot=RicercaServizioModificato_25.inf");
	truclient_step("26", "Verify if Abilita Checkbox's VisibleText Contain end", "snapshot=RicercaServizioModificato_26.inf");
	truclient_step("27", "Verify if Trasporto Element's VisibleText Contain Trasporto", "snapshot=RicercaServizioModificato_27.inf");
	truclient_step("29", "Click on Costi Link", "snapshot=RicercaServizioModificato_29.inf");
	truclient_step("31", "Click on Partec Inserime Link", "snapshot=RicercaServizioModificato_31.inf");
	truclient_step("33", "Verify if Massimo passeggeri TextBox's VisibleText Contain 6", "snapshot=RicercaServizioModificato_33.inf");
	truclient_step("34", "Verify if Label(Teen - Abilita) Label's VisibleText Contain end", "snapshot=RicercaServizioModificato_34.inf");
	truclient_step("36", "Click on Costi Button", "snapshot=RicercaServizioModificato_36.inf");
	truclient_step("38", "Verify if Scaglione da 6 a 6 passeg... Heading's VisibleText Contain Scaglione da 6 a 6 passeggeri", "snapshot=RicercaServizioModificato_38.inf");
	truclient_step("39", "Verify if 200,00 Focusable's VisibleText Contain 200,00", "snapshot=RicercaServizioModificato_39.inf");
	truclient_step("40", "Verify if 10,00 Focusable's VisibleText Contain 10,00", "snapshot=RicercaServizioModificato_40.inf");
	truclient_step("41", "Verify if 80,00 Focusable's VisibleText Contain 80,00", "snapshot=RicercaServizioModificato_41.inf");
	return 0;
}
