//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Anagrafica_OK()
{
	truclient_step("2", "Click on Element(1) Element", "snapshot=Anagrafica_OK_2.inf");
	truclient_step("3", "Click on Focusable(Catalogo) Focusable", "snapshot=Anagrafica_OK_3.inf");
	truclient_step("4", "Select Argentina e Cile from Catalogo * ListBox", "snapshot=Anagrafica_OK_4.inf");
	truclient_step("7", "Click on Codice * TextBox", "snapshot=Anagrafica_OK_7.inf");
	truclient_step("8", "Type Partec_Inserime in Codice * TextBox", "snapshot=Anagrafica_OK_8.inf");
	truclient_step("11", "Drag Nome * TextBox 14 px right and 2 px up", "snapshot=Anagrafica_OK_11.inf");
	truclient_step("12", "Type Partec_Inserime in Nome * TextBox", "snapshot=Anagrafica_OK_12.inf");
	truclient_step("14", "Click on Button(+ Aladyn Reparto) Button", "snapshot=Anagrafica_OK_14.inf");
	truclient_step("16", "Click on Apri Button", "snapshot=Anagrafica_OK_16.inf");
	truclient_step("18", "Select Argentina from Paese * ListBox", "snapshot=Anagrafica_OK_18.inf");
	truclient_step("20", "Click on Apri Button", "snapshot=Anagrafica_OK_20.inf");
	truclient_step("22", "Click on Buenos Aires 1363 , AR BA Element", "snapshot=Anagrafica_OK_22.inf");
	truclient_step("35", "Click on Note aggiuntive indirizzo TextBox", "snapshot=Anagrafica_OK_35.inf");
	truclient_step("36", "Type Av. Corrientes 3916, C11...Aires, Argentina in Note aggiuntive indirizzo TextBox", "snapshot=Anagrafica_OK_36.inf");
	truclient_step("38", "Click on Corrispondenti e Fornitor... Heading", "snapshot=Anagrafica_OK_38.inf");
	truclient_step("40", "Click on Indirizzo * TextBox", "snapshot=Anagrafica_OK_40.inf");
	truclient_step("42", "Click on Cerca indirizzo con Google... TextBox", "snapshot=Anagrafica_OK_42.inf");
	truclient_step("43", "Type Av. Corrientes 3916, C11...Aires, Argentina in Cerca indirizzo con Google... TextBox", "snapshot=Anagrafica_OK_43.inf");
	truclient_step("44", "Select Avenida Corrientes 3916, Città Autonoma di Buenos Aires, Argentina from Cerca indirizzo con Google... ListBox", "snapshot=Anagrafica_OK_44.inf");
	truclient_step("46", "Click on Conferma modifiche Button", "snapshot=Anagrafica_OK_46.inf");
	truclient_step("50", "Verify if Fornitore - Campo obbligatorio Element's VisibleText Contain Campo obbligatorio", "snapshot=Anagrafica_OK_50.inf");
	truclient_step("51", "Click on Fornitore TextBox", "snapshot=Anagrafica_OK_51.inf");
	truclient_step("53", "Type 803137 in Fornitore TextBox", "snapshot=Anagrafica_OK_53.inf");
	truclient_step("55", "Select 803137 / ESTILOPLUS from Fornitore ListBox", "snapshot=Anagrafica_OK_55.inf");
	truclient_step("57", "Click on Conferma modifiche Button", "snapshot=Anagrafica_OK_57.inf");
	return 0;
}
