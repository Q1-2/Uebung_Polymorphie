#pragma once
#include "stdafx.h"
#include "Fahrzeug.h"	
#include "PKW.h"		

class Kleinwagen:public PKW{

private: 
	int listenpreis;

public:
	void setListenpreis(int derListenpreis) {

		if(derListenpreis < 18000) //Ein Kleinwagen hat einen Listenpreis unter 18.000 Euro.
			listenpreis = derListenpreis;
		else 
			cout <<"Das ist kein Kleinwagen mehr!"<< endl;
	}


	void ausgabe()
	{
		cout<<"Kleinwagen"<<endl;
		cout<<"Hersteller: "<<hersteller<<endl;
		cout<<"Leistung: "<<leistung<<endl;
		cout<<"Preis: "<<preis<<endl;
		cout<<"Listenpreis: "<<listenpreis<<endl;
		cout<<"------------------"<<endl;
	}

};