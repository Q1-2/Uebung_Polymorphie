#include "stdafx.h"
#include "Fahrzeug.h"	
#include "PKW.h"		
#include "LKW.h"
#include "SUV.h"		

void SUV::setCo2(int co2Menge){
	co2 = co2Menge;
}

void SUV::ausgabe() 
{
	cout<<"SUV"<<endl;
	cout<<"Hersteller: "<<hersteller<<endl;
	cout<<"Leistung: "<<leistung<<endl;
	cout<<"Preis: "<<preis<<endl;
	cout<<"co2 Ausstoss: "<<co2<<endl;
	cout<<"------------------"<<endl;
}

SUV::SUV():Fahrzeug(), LKW(), PKW() { 
	setCo2(280);
}


SUV::SUV(int dieLeistung, string derHersteller, int dieTueren, int dasGewicht, int dieCo2Menge) 
	: Fahrzeug (dieLeistung, derHersteller), PKW(dieTueren, dieLeistung, derHersteller), LKW(dasGewicht, dieLeistung, derHersteller) {
		co2=dieCo2Menge;
}

SUV::~SUV() {
}