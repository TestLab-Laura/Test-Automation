//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Costi()
{
	truclient_step("2", "Click on Costi Link", "snapshot=Costi_2.inf");
	truclient_step("39", "Click on Aggiungi costi Link", "snapshot=Costi_39.inf");
	truclient_step("41", "Click on Conferma modifiche Button", "snapshot=Costi_41.inf");
	truclient_step("42", "Verify if Nome - Il campo deve contenere... Element's VisibleText Contain Il campo deve contenere ...meno 2 caratteri", "snapshot=Costi_42.inf");
	truclient_step("43", "Verify if Markup - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Costi_43.inf");
	truclient_step("46", "Click on Nome * TextBox", "snapshot=Costi_46.inf");
	truclient_step("47", "Type Partec_Inserime in Nome * TextBox", "snapshot=Costi_47.inf");
	truclient_step("48", "Click on Markup % * TextBox", "snapshot=Costi_48.inf");
	truclient_step("49", "Type 34 in Markup % * TextBox", "snapshot=Costi_49.inf");
	truclient_step("51", "Click on Conferma modifiche Button", "snapshot=Costi_51.inf");
	truclient_step("52", "Verify if Fornitore - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Costi_52.inf");
	truclient_step("55", "Click on Apri Button", "snapshot=Costi_55.inf");
	truclient_step("57", "Type 801 in Fornitore TextBox", "snapshot=Costi_57.inf");
	truclient_step("59", "Select 300801 / DULAC AG from Fornitore ListBox", "snapshot=Costi_59.inf");
	truclient_step("68", "Click on Conferma modifiche Button", "snapshot=Costi_68.inf");
	return 0;
}
