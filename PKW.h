#pragma once
#include "Fahrzeug.h"

class PKW: virtual public Fahrzeug // virtual bei Mehrfachvererbung!
{ 
protected:
	int anzahlTueren; 

public: 
	void setAnzahlTueren(int);
	int getAnzahlTueren();

	void ausgabe();
	
	PKW();
	PKW(int,int,string);
	~PKW();

};

