//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaHotel()
{
	truclient_step("2", "Click on Hotel QG Link", "snapshot=RicercaHotel_2.inf");
	truclient_step("3", "Cerca hotel", "snapshot=RicercaHotel_3.inf");
	{
		truclient_step("3.1", "Click on Codice TextBox", "snapshot=RicercaHotel_3.1.inf");
		truclient_step("3.2", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaHotel_3.2.inf");
		truclient_step("3.3", "Click on Cerca hotel Button", "snapshot=RicercaHotel_3.3.inf");
	}
	truclient_step("5", "Click on Partec Inserime Link", "snapshot=RicercaHotel_5.inf");
	truclient_step("6", "Verify if Argentina e Cile Focusable's VisibleText Contain Argentina e Cile", "snapshot=RicercaHotel_6.inf");
	truclient_step("8", "Verify if Codice * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaHotel_8.inf");
	truclient_step("9", "Verify if Nome * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaHotel_9.inf");
	truclient_step("10", "Verify if Aladyn Reparto Button's VisibleText Contain Aladyn Reparto", "snapshot=RicercaHotel_10.inf");
	truclient_step("11", "Verify if Paese * TextBox's VisibleText Contain Argentina", "snapshot=RicercaHotel_11.inf");
	truclient_step("12", "Verify if Città * TextBox's VisibleText Contain Buenos Aires (1363), AR-BA", "snapshot=RicercaHotel_12.inf");
	truclient_step("13", "Verify if Fornitore TextBox's VisibleText Contain 803137 / ESTILOPLUS", "snapshot=RicercaHotel_13.inf");
	truclient_step("15", "Click on Descrizione Link", "snapshot=RicercaHotel_15.inf");
	truclient_step("16", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaHotel_16.inf");
	truclient_step("17", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaHotel_17.inf");
	truclient_step("18", "Click on Camere e pasti Link", "snapshot=RicercaHotel_18.inf");
	truclient_step("19", "Verify if Waterhole Chalet Focusable's VisibleText Contain  Waterhole Chalet", "snapshot=RicercaHotel_19.inf");
	truclient_step("20", "Verify if 1 cena, prima colazione,... Button's VisibleText Contain 1 cena, prima colazione, 1 pranzo", "snapshot=RicercaHotel_20.inf");
	truclient_step("22", "Click on Stagionalità Link", "snapshot=RicercaHotel_22.inf");
	truclient_step("23", "Verify if 26/06/2025 Element's VisibleText Contain 26/06/2025", "snapshot=RicercaHotel_23.inf");
	truclient_step("24", "Verify if 27/07/2025 Element's VisibleText Contain 27/07/2025", "snapshot=RicercaHotel_24.inf");
	truclient_step("25", "Click on Costi Link", "snapshot=RicercaHotel_25.inf");
	truclient_step("26", "Verify if Markup TextBox's VisibleText Contain 43", "snapshot=RicercaHotel_26.inf");
	truclient_step("27", "Verify if Valuta TextBox's VisibleText Contain AFN", "snapshot=RicercaHotel_27.inf");
	truclient_step("28", "Verify if Per camera Focusable's VisibleText Contain Per camera", "snapshot=RicercaHotel_28.inf");
	truclient_step("29", "Verify if Inserimento costi camera... Focusable's VisibleText Contain Inserimento costi camera...no pasti incluso", "snapshot=RicercaHotel_29.inf");
	truclient_step("32", "Click on Vai a Inserimento Costi Button", "snapshot=RicercaHotel_32.inf");
	truclient_step("33", "Verify if Seleziona stagionalità Focusable's VisibleText Contain 26-06-2025 - 27-07-2025", "snapshot=RicercaHotel_33.inf");
	truclient_step("34", "Verify if Fornitore Element's VisibleText Contain 803137 / ESTILOPLUS", "snapshot=RicercaHotel_34.inf");
	truclient_step("35", "Verify if Tipo camera: Waterhole... Button's VisibleText Contain Tipo camera:  Waterhole Chalet", "snapshot=RicercaHotel_35.inf");
	truclient_step("36", "Verify if Markup TextBox's VisibleText Contain Usa il Markup dell'hotel (43%)", "snapshot=RicercaHotel_36.inf");
	truclient_step("37", "Verify if Usa il tipo prezzi dell'hotel... Element's VisibleText Contain Usa il tipo prezzi dell'...tel (Per camera)", "snapshot=RicercaHotel_37.inf");
	truclient_step("38", "Verify if Max Occupancy con child TextBox's VisibleText Contain 2", "snapshot=RicercaHotel_38.inf");
	truclient_step("39", "Verify if Max Occupancy con teen TextBox's VisibleText Contain 2", "snapshot=RicercaHotel_39.inf");
	truclient_step("40", "Verify if / 1 cena, prima colazione,... GridCell's VisibleText Contain 1 cena, prima colazione, 1 pranzo", "snapshot=RicercaHotel_40.inf");
	truclient_step("41", "Verify if 120 TextBox's VisibleText Contain 120", "snapshot=RicercaHotel_41.inf");
	truclient_step("42", "Verify if 130 TextBox's VisibleText Contain 130", "snapshot=RicercaHotel_42.inf");
	truclient_step("45", "Click on Promozioni Link", "snapshot=RicercaHotel_45.inf");
	truclient_step("46", "Verify if Partec Promo Link's VisibleText Contain Partec_Promo", "snapshot=RicercaHotel_46.inf");
	truclient_step("47", "Verify if Long Stay Element's VisibleText Contain Long Stay", "snapshot=RicercaHotel_47.inf");
	truclient_step("48", "Verify if 26/06/2025 Element's VisibleText Contain 26/06/2025", "snapshot=RicercaHotel_48.inf");
	truclient_step("49", "Verify if 19/07/2025 Element's VisibleText Contain 19/07/2025", "snapshot=RicercaHotel_49.inf");
	truclient_step("50", "Verify if Stay 3 Pay 2 Focusable's VisibleText Contain Stay 3Pay 2", "snapshot=RicercaHotel_50.inf");
	truclient_step("51", "Verify if Minimo: 1 Element's VisibleText Contain Minimo: 1", "snapshot=RicercaHotel_51.inf");
	truclient_step("52", "Verify if Giorni di anticipo: 2 Element's VisibleText Contain Giorni di anticipo: 2", "snapshot=RicercaHotel_52.inf");
	return 0;
}
