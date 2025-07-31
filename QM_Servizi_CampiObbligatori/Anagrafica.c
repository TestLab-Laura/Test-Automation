//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Anagrafica()
{
	truclient_step("30", "Click on Catalogo Focusable", "snapshot=Anagrafica_30.inf");
	truclient_step("31", "Select Argentina e Cile from Catalogo * ListBox", "snapshot=Anagrafica_31.inf");
	truclient_step("33", "Click on Codice * TextBox", "snapshot=Anagrafica_33.inf");
	truclient_step("34", "Type Partec_Inserime in Codice * TextBox", "snapshot=Anagrafica_34.inf");
	truclient_step("35", "Click on Focusable(4) Focusable", "snapshot=Anagrafica_35.inf");
	truclient_step("37", "Click on Individuale ListItem", "snapshot=Anagrafica_37.inf");
	truclient_step("39", "Click on Nome * TextBox", "snapshot=Anagrafica_39.inf");
	truclient_step("40", "Type Partec_Inserime in Nome * TextBox", "snapshot=Anagrafica_40.inf");
	truclient_step("42", "Click on Button(4) Button", "snapshot=Anagrafica_42.inf");
	truclient_step("44", "Click on Focusable(7) Focusable", "snapshot=Anagrafica_44.inf");
	truclient_step("45", "Click on Trasferimento ListItem", "snapshot=Anagrafica_45.inf");
	truclient_step("47", "Click on Apri Button", "snapshot=Anagrafica_47.inf");
	truclient_step("49", "Select Argentina from Paese * ListBox", "snapshot=Anagrafica_49.inf");
	truclient_step("51", "Click on Apri Button", "snapshot=Anagrafica_51.inf");
	truclient_step("52", "GroupStep.Mouseover", "snapshot=Anagrafica_52.inf");
	{
		truclient_step("52.2", "Move mouse over Buenos Aires 1363 , AR BA Focusable", "snapshot=Anagrafica_52.2.inf");
	}
	truclient_step("53", "Click on Buenos Aires 1363 , AR BA Element", "snapshot=Anagrafica_53.inf");
	truclient_step("58", "Click on Conferma modifiche Button", "snapshot=Anagrafica_58.inf");
	return 0;
}
