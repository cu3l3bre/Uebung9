

#include <iostream>
#include "koordinaten.h"


//a) Eine Funktion, welche die Koordinaten des Punktes auf der Konsole ausgibt.
void ausgabePunkte(Punkt punkt)
{
	std::cout << "Die Koordinaten des Punktes lauten: x=" << punkt.x << " y=" << punkt.y << std::endl;
}

//b) Eine Funktion, die einen Punkt anhand der übergebenen Koordinaten erzeugt(„produziert“).
Punkt erzeugePunkt(double x, double y)
{
	Punkt punkt;

	punkt.x = x;
	punkt.y = y;

	return punkt;
}



//c) Funktionen, welche 2 Punkte addieren bzw.subtrahieren.
Punkt addierePunkte(Punkt punkt1, Punkt punkt2)
{
	Punkt ergebnisPunkt;

	ergebnisPunkt.x = punkt1.x + punkt2.x;
	ergebnisPunkt.y = punkt1.y + punkt2.y;

	return ergebnisPunkt;
}

//d) Den Abstand des Punktes zum Koordinatenursprung(0, 0) berechnet.
double berechneAbstandUrsprung(Punkt punkt)
{
	double abstandUrsprung = sqrt((pow(punkt.x,2)) + (pow(punkt.y,2)));

	return abstandUrsprung;
}


//e) Eine Funktion, welche die Länge der Strecke zwischen 2 Punkten berechnet.
double berechneAbstandPunkte(Punkt punkt1, Punkt punkt2)
{

	double abstandPunkte;
	double abstandInX = 0.0;
	double abstandInY = 0.0;

	abstandInX = punkt1.x - punkt2.x;
	abstandInY = punkt1.y - punkt2.y;

	abstandPunkte = sqrt((pow(abstandInX, 2)) + (pow(abstandInY, 2)));

	return abstandPunkte;

}



//f) Fortgeschritten: Vertauschen der Koordinaten eines Punktes.

void vertauscheKoordinatenPunkt(Punkt* punkt)
{
	Punkt tmp;
	tmp.x = (*punkt).x;
	tmp.x = punkt->y;
	tmp.y = punkt->x;
	*punkt = tmp;
}


//g) Fortgeschritten: Funktion(en) um einen Punkt horizontal bzw.vertikal zu verschieben.
void verschiebePunkt(Punkt* punkt, double x, double y)
{
	punkt->x = punkt->x + x;
	punkt->y = punkt->y + y;
}


// Bonus) 2 Punkte miteinander vertauschen
