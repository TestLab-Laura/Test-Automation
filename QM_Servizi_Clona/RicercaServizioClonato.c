//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

RicercaServizioClonato()
{
	truclient_step("2", "Click on Codice TextBox", "snapshot=RicercaServizioClonato_2.inf");
	truclient_step("3", "Type Clona_Partec_In in Codice TextBox", "snapshot=RicercaServizioClonato_3.inf");
	truclient_step("5", "Click on Cerca servizi Button", "snapshot=RicercaServizioClonato_5.inf");
	truclient_step("6", "GroupStep.Mouseover", "snapshot=RicercaServizioClonato_6.inf");
	{
		truclient_step("6.3", "Move mouse over Clona Partec In Partec... Element", "snapshot=RicercaServizioClonato_6.3.inf");
	}
	truclient_step("7", "Click on Clona Partec In Link", "snapshot=RicercaServizioClonato_7.inf");
	truclient_step("9", "Verify if Argentina e Cile Focusable's VisibleText Contain Argentina e Cile", "snapshot=RicercaServizioClonato_9.inf");
	truclient_step("10", "Verify if Codice * TextBox's VisibleText Contain Clona_Partec_In", "snapshot=RicercaServizioClonato_10.inf");
	truclient_step("11", "Verify if Individuale Focusable's VisibleText Contain Individuale", "snapshot=RicercaServizioClonato_11.inf");
	truclient_step("12", "Verify if Nome * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaServizioClonato_12.inf");
	truclient_step("13", "Verify if Aladyn Quality Group Button's VisibleText Contain Aladyn Quality Group", "snapshot=RicercaServizioClonato_13.inf");
	truclient_step("14", "Verify if Trasferimento Focusable's VisibleText Contain Trasferimento", "snapshot=RicercaServizioClonato_14.inf");
	truclient_step("15", "Verify if Paese * TextBox's VisibleText Contain Argentina", "snapshot=RicercaServizioClonato_15.inf");
	truclient_step("16", "Verify if Città * TextBox's VisibleText Contain Buenos Aires (1363), AR-BA", "snapshot=RicercaServizioClonato_16.inf");
	truclient_step("18", "Click on Dati tecnici Link", "snapshot=RicercaServizioClonato_18.inf");
	truclient_step("19", "Verify if Età minima partecipanti TextBox's VisibleText Contain 0", "snapshot=RicercaServizioClonato_19.inf");
	truclient_step("20", "Verify if Minimo passeggeri TextBox's VisibleText Contain 2", "snapshot=RicercaServizioClonato_20.inf");
	truclient_step("21", "Verify if Massimo passeggeri TextBox's VisibleText Contain 5", "snapshot=RicercaServizioClonato_21.inf");
	truclient_step("22", "Verify if Italiano Button's VisibleText Contain Italiano", "snapshot=RicercaServizioClonato_22.inf");
	truclient_step("23", "Verify if Trasporto Element's VisibleText Contain Trasporto", "snapshot=RicercaServizioClonato_23.inf");
	truclient_step("24", "Click on Descrizione Link", "snapshot=RicercaServizioClonato_24.inf");
	truclient_step("26", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizioClonato_26.inf");
	truclient_step("27", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizioClonato_27.inf");
	truclient_step("28", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizioClonato_28.inf");
	truclient_step("29", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizioClonato_29.inf");
	truclient_step("30", "Verify if Aconcagua Button's VisibleText Contain Aconcagua", "snapshot=RicercaServizioClonato_30.inf");
	truclient_step("32", "Click on Costi Link", "snapshot=RicercaServizioClonato_32.inf");
	truclient_step("34", "Verify if Partec Inserime Link's VisibleText Contain ", "snapshot=RicercaServizioClonato_34.inf");
	truclient_step("35", "Verify if Costi Link's VisibleText Contain Costi", "snapshot=RicercaServizioClonato_35.inf");
	truclient_step("36", "Verify if 300801 Element's VisibleText Contain DULAC AG", "snapshot=RicercaServizioClonato_36.inf");
	truclient_step("37", "Verify if (Default) 4 Focusable's VisibleText Contain (Default)4", "snapshot=RicercaServizioClonato_37.inf");
	truclient_step("38", "Verify if (Default) 10 Focusable's VisibleText Contain (Default)10", "snapshot=RicercaServizioClonato_38.inf");
	truclient_step("39", "Verify if (Default) 16 Focusable's VisibleText Contain (Default)16", "snapshot=RicercaServizioClonato_39.inf");
	truclient_step("40", "Verify if EUR Element's VisibleText Contain EUR", "snapshot=RicercaServizioClonato_40.inf");
	truclient_step("41", "Verify if 0% Element's VisibleText Contain 0%", "snapshot=RicercaServizioClonato_41.inf");
	truclient_step("42", "Verify if 34% Element's VisibleText Contain 34%", "snapshot=RicercaServizioClonato_42.inf");
	truclient_step("44", "Click on Vendita Link", "snapshot=RicercaServizioClonato_44.inf");
	truclient_step("47", "Verify if € 134,00 Element's VisibleText Contain € 134,00", "snapshot=RicercaServizioClonato_47.inf");
	truclient_step("48", "Verify if — Focusable's VisibleText Contain —", "snapshot=RicercaServizioClonato_48.inf");
	truclient_step("49", "Verify if € 67,00 Element's VisibleText Contain € 67,00", "snapshot=RicercaServizioClonato_49.inf");
	return 0;
}
