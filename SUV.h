#pragma once
//#include "LKW.h"
//#include "PKW.h"
class SUV: public PKW, public LKW // Vererbung von den Klassen LKW und PKW (und Fahrzeug)
{
private: 
	int co2; // co2 Ausstoﬂ in g/km 

public: 
	void setCo2(int);
	void ausgabe();

	SUV();
	SUV(int, string, int, int, int);
	~SUV();
};
