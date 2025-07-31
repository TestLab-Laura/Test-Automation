//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Anagrafica()
{
	truclient_step("3", "Click on Element(1) Element", "snapshot=Anagrafica_3.inf");
	truclient_step("4", "Click on Focusable(1) Focusable", "snapshot=Anagrafica_4.inf");
	truclient_step("6", "Click on Argentina e Cile ListItem", "snapshot=Anagrafica_6.inf");
	truclient_step("8", "Click on Codice * TextBox", "snapshot=Anagrafica_8.inf");
	truclient_step("9", "Type Partec_Inserime in Codice * TextBox", "snapshot=Anagrafica_9.inf");
	truclient_step("12", "Drag Nome * TextBox 14 px right and 2 px up", "snapshot=Anagrafica_12.inf");
	truclient_step("13", "Type Partec_Inserime in Nome * TextBox", "snapshot=Anagrafica_13.inf");
	truclient_step("15", "Click on Button(+ Aladyn Reparto) Button", "snapshot=Anagrafica_15.inf");
	truclient_step("17", "Click on Apri Button", "snapshot=Anagrafica_17.inf");
	truclient_step("19", "Select Argentina from Paese * ListBox", "snapshot=Anagrafica_19.inf");
	truclient_step("21", "Click on Apri Button", "snapshot=Anagrafica_21.inf");
	truclient_step("22", "GroupStep.Mouseover", "snapshot=Anagrafica_22.inf");
	{
		truclient_step("22.4", "Move mouse over Buenos Aires 1363 , AR BA Focusable", "snapshot=Anagrafica_22.4.inf");
	}
	truclient_step("23", "Click on Buenos Aires 1363 , AR BA Element", "snapshot=Anagrafica_23.inf");
	truclient_step("34", "Click on Note aggiuntive indirizzo TextBox", "snapshot=Anagrafica_34.inf");
	truclient_step("35", "Type Av. Corrientes 3916, C11...Aires, Argentina in Note aggiuntive indirizzo TextBox", "snapshot=Anagrafica_35.inf");
	truclient_step("37", "Click on Corrispondenti e Fornitor... Heading", "snapshot=Anagrafica_37.inf");
	truclient_step("39", "Click on Indirizzo * TextBox", "snapshot=Anagrafica_39.inf");
	truclient_step("41", "Click on Cerca indirizzo con Google... TextBox", "snapshot=Anagrafica_41.inf");
	truclient_step("42", "Type Av. Corrientes 3916, C11...Aires, Argentina in Cerca indirizzo con Google... TextBox", "snapshot=Anagrafica_42.inf");
	truclient_step("43", "Select Avenida Corrientes 3916, Città Autonoma di Buenos Aires, Argentina from Cerca indirizzo con Google... ListBox", "snapshot=Anagrafica_43.inf");
	truclient_step("45", "Click on Conferma modifiche Button", "snapshot=Anagrafica_45.inf");
	truclient_step("47", "Click on Fornitore TextBox", "snapshot=Anagrafica_47.inf");
	truclient_step("49", "Type 803137 in Fornitore TextBox", "snapshot=Anagrafica_49.inf");
	truclient_step("51", "Select 803137 / ESTILOPLUS from Fornitore ListBox", "snapshot=Anagrafica_51.inf");
	truclient_step("53", "Click on Conferma modifiche Button", "snapshot=Anagrafica_53.inf");
	return 0;
}
