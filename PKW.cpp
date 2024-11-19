#include "stdafx.h"
#include "Fahrzeug.h"	
#include "PKW.h"		

void PKW::setAnzahlTueren(int anzahlTueren) {
	this->anzahlTueren = anzahlTueren;
}

int PKW::getAnzahlTueren() {
	return anzahlTueren;
}

void PKW::ausgabe()  
{
	cout<<"PKW"<<endl;
	cout<<"Hersteller: "<<hersteller<<endl;
	cout<<"Leistung: "<<leistung<<endl;
	cout<<"Preis: "<<preis<<endl;
	cout<<"Anzahl der Tueren: "<<anzahlTueren<<endl;
	cout<<"------------------"<<endl;
}

PKW::PKW():Fahrzeug()
{
	anzahlTueren=0;
}


PKW::PKW(int anzahlTueren, int dieLeistung, string derHersteller):Fahrzeug(dieLeistung, derHersteller) //Beachte: Basisklasse ohne Datentypen!
{
	this->anzahlTueren=anzahlTueren;
}


PKW::~PKW()
{

}