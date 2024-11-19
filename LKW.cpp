#include "stdafx.h"		
#include "Fahrzeug.h"
#include "LKW.h"

void LKW::setGewicht(int gesamtgewicht) {

	if(gesamtgewicht >= 2800) //Ab 2,8 Tonnen gilt ein Fahrzeug als LKW.
		gewicht = gesamtgewicht;
	else 
		cout <<"Was soll das sein?"<< endl;
}


void LKW::ausgabe() 
{
	cout<<"LKW"<<endl;
	cout<<"Hersteller: "<<hersteller<<endl;
	cout<<"Leistung: "<<leistung<<endl;
	cout<<"Preis: "<<preis<<endl;
	cout<<"Gewicht: "<<gewicht<<endl;
	cout<<"------------------"<<endl;
}

LKW::LKW():Fahrzeug()
{
	gewicht=0;
}

LKW::LKW(int dasGewicht, int dieLeistung, string derHersteller):Fahrzeug(dieLeistung, derHersteller) 
{
	gewicht=dasGewicht;
}

LKW::~LKW()
{
}