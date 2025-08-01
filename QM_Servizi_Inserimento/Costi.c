//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Costi()
{
	truclient_step("2", "Click on Costi Link", "snapshot=Costi_2.inf");
	truclient_step("39", "Click on Aggiungi costi Link", "snapshot=Costi_39.inf");
	truclient_step("41", "Click on Nome * TextBox", "snapshot=Costi_41.inf");
	truclient_step("42", "Type Partec_Inserime in Nome * TextBox", "snapshot=Costi_42.inf");
	truclient_step("44", "Click on Apri Button", "snapshot=Costi_44.inf");
	truclient_step("46", "Type 801 in Fornitore TextBox", "snapshot=Costi_46.inf");
	truclient_step("48", "Select 300801 / DULAC AG from Fornitore ListBox", "snapshot=Costi_48.inf");
	truclient_step("50", "Click on Label(Gestisci scaglioni) Label", "snapshot=Costi_50.inf");
	truclient_step("53", "Drag Massimo passeggeri TextBox 0 px right and 0 px down", "snapshot=Costi_53.inf");
	truclient_step("54", "Type 5 in Massimo passeggeri TextBox", "snapshot=Costi_54.inf");
	truclient_step("58", "Click on Markup % * TextBox", "snapshot=Costi_58.inf");
	truclient_step("59", "Type 34 in Markup % * TextBox", "snapshot=Costi_59.inf");
	truclient_step("60", "Click on Note e stampe Stampa... Element", "snapshot=Costi_60.inf");
	truclient_step("63", "Click on Conferma modifiche Button", "snapshot=Costi_63.inf");
	truclient_step("65", "Click on Stagionalità costi Button", "snapshot=Costi_65.inf");
	truclient_step("67", "Click on Element(AGGIUNGI) Element", "snapshot=Costi_67.inf");
	truclient_step("69", "Click on Aggiungi intervallo di... Focusable", "snapshot=Costi_69.inf");
	truclient_step("70", "GroupStep.Mouseover", "snapshot=Costi_70.inf");
	{
		truclient_step("70.1", "Move mouse over Focusable(13) Focusable", "snapshot=Costi_70.1.inf");
	}
	truclient_step("71", "Click on Fino a TextBox", "snapshot=Costi_71.inf");
	truclient_step("73", "Click on 27 Button", "snapshot=Costi_73.inf");
	truclient_step("75", "Click on Aggiungi intervallo date Button", "snapshot=Costi_75.inf");
	truclient_step("77", "Click on Costi Button", "snapshot=Costi_77.inf");
	truclient_step("79", "Click on Aggiungi scaglione Button", "snapshot=Costi_79.inf");
	truclient_step("81", "Click on Massimo passeggeri TextBox", "snapshot=Costi_81.inf");
	truclient_step("82", "Type 5 in Massimo passeggeri TextBox", "snapshot=Costi_82.inf");
	truclient_step("84", "Click on Aggiungi Button", "snapshot=Costi_84.inf");
	truclient_step("86", "Click on Adulto TextBox", "snapshot=Costi_86.inf");
	truclient_step("87", "Type 100 in Adulto TextBox", "snapshot=Costi_87.inf");
	truclient_step("88", "Click on ​Infant TextBox", "snapshot=Costi_88.inf");
	truclient_step("89", "Type 0 in ​Infant TextBox", "snapshot=Costi_89.inf");
	truclient_step("90", "Scroll on 01/07/2025 27/08/2025... Element", "snapshot=Costi_90.inf");
	truclient_step("91", "Click on Child TextBox", "snapshot=Costi_91.inf");
	truclient_step("94", "Type 50 in Child TextBox", "snapshot=Costi_94.inf");
	truclient_step("95", "Click on Teen TextBox", "snapshot=Costi_95.inf");
	truclient_step("96", "Type 80 in Teen TextBox", "snapshot=Costi_96.inf");
	truclient_step("99", "Click on Salva costi Button", "snapshot=Costi_99.inf");
	return 0;
}
