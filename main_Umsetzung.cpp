#include "stdafx.h"
// Die Reihenfolge ist nicht zufällig!!!
#include "Fahrzeug.h"	

#include "PKW.h"		
#include "LKW.h"

#include "SUV.h"		
#include "Kleinwagen.h"	

int main(){
	Fahrzeug* liste[4] = { nullptr };

	PKW pkw(5, 120,"VW");
	LKW lkw(3800, 260, "MAN");
	SUV suv(200,"BMW", 5, 2900,290);
	
	liste[0] = &pkw;
	liste[1] = &lkw;
	liste[2] = &suv;


	pkw.ausgabe();
	lkw.ausgabe();
	suv.ausgabe();




	
	return 0;
}