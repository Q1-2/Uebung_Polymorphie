#pragma once

class LKW: virtual public Fahrzeug // virtual bei Mehrfachvererbung!
{ 
private: 
	int gewicht; //Gesamtgewicht in kg

public:
	void setGewicht(int);

	void ausgabe(); 

	LKW();
	LKW(int, int, string);
	~LKW();
};
