#pragma once

class Fahrzeug 
{
protected:	
	int preis;
	int leistung;
	string hersteller;
	static int anzahl; 

public:
	void setPreis(int);
	int getPreis();
	void setLeistung(int);
	void setHersteller(string);

	int getLeistung();
	const string getHersteller(); 

	int getAnzahlObjekte(); 

	void tune(int);

	void ausgabe(); 
	
	Fahrzeug();
	Fahrzeug(int, string);
	Fahrzeug(const Fahrzeug&);

	~Fahrzeug();
};

