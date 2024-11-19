#include "stdafx.h"
#include "Fahrzeug.h"	

int Fahrzeug::anzahl=0;

void Fahrzeug::setPreis(int derPreis){
	preis = derPreis;
}

int Fahrzeug::getPreis() {
	return preis;
}

void Fahrzeug::setLeistung(int dieLeistung)
{
	if(dieLeistung < 65 || dieLeistung > 400)
	{
		cout << "Fehler - keine Zuweisung" << endl;
		leistung = 0;
	}
	else leistung = dieLeistung;
}

void Fahrzeug::setHersteller(string derHersteller)
{
	int laenge = derHersteller.length();
	if (laenge <1 || laenge > 10) cout << "Keine Zuweisung!\n";
	else hersteller = derHersteller;
}

int Fahrzeug::getLeistung ()
{
	return leistung;
}

const string Fahrzeug::getHersteller ()
{
	return hersteller;
}

void Fahrzeug::tune(int tuneWert)
{
	leistung = tuneWert+leistung;
}

int Fahrzeug::getAnzahlObjekte()
{
	return anzahl;
}

void Fahrzeug::ausgabe() //"virtual" wird NUR in der Klassen DEFINITION geschrieben! Nicht in der Implementierung der Methode.
{
	cout<<"Fahrzeug"<<endl;
	cout<<"Hersteller: "<<hersteller<<endl;
	cout<<"Leistung: "<<leistung<<endl;
	cout<<"Preis: "<<preis<<endl;
	cout<<"------------------"<<endl;
}

Fahrzeug::Fahrzeug()
{
	preis=0;
	leistung = 0;
	hersteller = "leer";

	anzahl++;
}


Fahrzeug::Fahrzeug(int dieLeistung, string derHersteller)
{
	preis=0;
	setLeistung(dieLeistung);
	hersteller = derHersteller;

	anzahl++;
}

Fahrzeug::Fahrzeug(const Fahrzeug &copy)
{
	preis=0;
	leistung = copy.leistung;
	hersteller = copy.hersteller;

	anzahl++;
}


Fahrzeug::~Fahrzeug()
{
	anzahl--;
}
