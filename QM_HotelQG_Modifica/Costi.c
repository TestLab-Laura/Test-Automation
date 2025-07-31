//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Costi()
{
	truclient_step("2", "Click on Costi Link", "snapshot=Costi_2.inf");
	truclient_step("10", "Click on 0 Element", "snapshot=Costi_10.inf");
	truclient_step("13", "Click on Apri Button", "snapshot=Costi_13.inf");
	truclient_step("15", "Select AFN from Valuta ListBox", "snapshot=Costi_15.inf");
	truclient_step("30", "Click on Salva configurazione... Button", "snapshot=Costi_30.inf");
	truclient_step("31", "Verify if Conferma modifiche Heading's VisibleText Contain Conferma modifiche", "snapshot=Costi_31.inf");
	truclient_step("34", "Click on Conferma Button", "snapshot=Costi_34.inf");
	truclient_step("36", "Click on Vai a Inserimento Costi Button", "snapshot=Costi_36.inf");
	truclient_step("39", "Click on Max Occupancy con child TextBox", "snapshot=Costi_39.inf");
	truclient_step("40", "Type 2 in Max Occupancy con child TextBox", "snapshot=Costi_40.inf");
	truclient_step("42", "Click on Max Occupancy con teen TextBox", "snapshot=Costi_42.inf");
	truclient_step("43", "Type 2 in Max Occupancy con teen TextBox", "snapshot=Costi_43.inf");
	truclient_step("45", "Click on 1 cena, prima colazione,... TextBox", "snapshot=Costi_45.inf");
	truclient_step("46", "Type 120 in 1 cena, prima colazione,... TextBox", "snapshot=Costi_46.inf");
	truclient_step("47", "Click on ​ TextBox", "snapshot=Costi_47.inf");
	truclient_step("48", "Type 130 in ​ TextBox", "snapshot=Costi_48.inf");
	truclient_step("50", "Click on 10 prime colazioni +... TextBox", "snapshot=Costi_50.inf");
	truclient_step("51", "Type 220 in 10 prime colazioni +... TextBox", "snapshot=Costi_51.inf");
	truclient_step("52", "Click on ​ TextBox", "snapshot=Costi_52.inf");
	truclient_step("53", "Type 230 in ​ TextBox", "snapshot=Costi_53.inf");
	truclient_step("61", "Click on Conferma modifiche Button", "snapshot=Costi_61.inf");
	return 0;
}
