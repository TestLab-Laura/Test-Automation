//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaHotelModificato()
{
	truclient_step("2", "Click on Hotel QG Link", "snapshot=RicercaHotelModificato_2.inf");
	truclient_step("3", "Cerca hotel", "snapshot=RicercaHotelModificato_3.inf");
	{
		truclient_step("3.1", "Click on Codice TextBox", "snapshot=RicercaHotelModificato_3.1.inf");
		truclient_step("3.2", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaHotelModificato_3.2.inf");
		truclient_step("3.3", "Click on Cerca hotel Button", "snapshot=RicercaHotelModificato_3.3.inf");
	}
	truclient_step("5", "Click on Partec Inserime Link", "snapshot=RicercaHotelModificato_5.inf");
	truclient_step("6", "Verify if Catalogo Focusable's VisibleText Contain Argentina e Cile", "snapshot=RicercaHotelModificato_6.inf");
	truclient_step("8", "Verify if Codice * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaHotelModificato_8.inf");
	truclient_step("9", "Verify if Nome * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaHotelModificato_9.inf");
	truclient_step("10", "Verify if Aladyn Reparto Button's VisibleText Contain Aladyn Reparto", "snapshot=RicercaHotelModificato_10.inf");
	truclient_step("11", "Verify if Flexy NY Button's VisibleText Contain Flexy NY", "snapshot=RicercaHotelModificato_11.inf");
	truclient_step("12", "Verify if Paese * TextBox's VisibleText Contain Argentina", "snapshot=RicercaHotelModificato_12.inf");
	truclient_step("13", "Verify if Città * TextBox's VisibleText Contain Buenos Aires (1363), AR-BA", "snapshot=RicercaHotelModificato_13.inf");
	truclient_step("14", "Verify if Fornitore TextBox's VisibleText Contain 803137 / ESTILOPLUS", "snapshot=RicercaHotelModificato_14.inf");
	truclient_step("16", "Click on Camere e pasti Link", "snapshot=RicercaHotelModificato_16.inf");
	truclient_step("17", "Verify if Waterhole Chalet Focusable's VisibleText Contain  Waterhole Chalet", "snapshot=RicercaHotelModificato_17.inf");
	truclient_step("18", "Verify if 1 cena, prima colazione,... Button's VisibleText Contain 1 cena, prima colazione, 1 pranzo", "snapshot=RicercaHotelModificato_18.inf");
	truclient_step("19", "Verify if 10 prime colazioni +... Button's VisibleText Contain 10 prime colazioni + 5 pranzi + 5 cene", "snapshot=RicercaHotelModificato_19.inf");
	truclient_step("21", "Click on Costi Link", "snapshot=RicercaHotelModificato_21.inf");
	truclient_step("22", "Verify if Markup TextBox's VisibleText Contain 43", "snapshot=RicercaHotelModificato_22.inf");
	truclient_step("23", "Verify if Valuta TextBox's VisibleText Contain AFN", "snapshot=RicercaHotelModificato_23.inf");
	truclient_step("24", "Verify if Per camera Focusable's VisibleText Contain Per camera", "snapshot=RicercaHotelModificato_24.inf");
	truclient_step("25", "Verify if Inserimento costi camera... Focusable's VisibleText Contain Inserimento costi camera...no pasti incluso", "snapshot=RicercaHotelModificato_25.inf");
	truclient_step("28", "Click on Vai a Inserimento Costi Button", "snapshot=RicercaHotelModificato_28.inf");
	truclient_step("29", "Verify if Fornitore Element's VisibleText Contain 803137 / ESTILOPLUS", "snapshot=RicercaHotelModificato_29.inf");
	truclient_step("30", "Verify if Tipo camera: Waterhole... Button's VisibleText Contain Tipo camera:  Waterhole Chalet", "snapshot=RicercaHotelModificato_30.inf");
	truclient_step("31", "Verify if Markup TextBox's VisibleText Contain Usa il Markup dell'hotel (43%)", "snapshot=RicercaHotelModificato_31.inf");
	truclient_step("32", "Verify if Usa il tipo prezzi dell'hotel... Element's VisibleText Contain Usa il tipo prezzi dell'...tel (Per camera)", "snapshot=RicercaHotelModificato_32.inf");
	truclient_step("33", "Verify if Max Occupancy con child TextBox's VisibleText Contain 2", "snapshot=RicercaHotelModificato_33.inf");
	truclient_step("34", "Verify if Max Occupancy con teen TextBox's VisibleText Contain 2", "snapshot=RicercaHotelModificato_34.inf");
	truclient_step("35", "Verify if / 1 cena, prima colazione,... GridCell's VisibleText Contain 1 cena, prima colazione, 1 pranzo", "snapshot=RicercaHotelModificato_35.inf");
	truclient_step("36", "Verify if 120 TextBox's VisibleText Contain 120", "snapshot=RicercaHotelModificato_36.inf");
	truclient_step("37", "Verify if 130 TextBox's VisibleText Contain 130", "snapshot=RicercaHotelModificato_37.inf");
	truclient_step("38", "Verify if / 10 prime colazioni... GridCell's VisibleText Contain 10 prime colazioni + 5 pranzi + 5 cene", "snapshot=RicercaHotelModificato_38.inf");
	truclient_step("39", "Verify if 220 TextBox's VisibleText Contain 220", "snapshot=RicercaHotelModificato_39.inf");
	truclient_step("40", "Verify if 230 TextBox's VisibleText Contain 230", "snapshot=RicercaHotelModificato_40.inf");
	return 0;
}
