#pragma once


struct Punkt 
{
	double x;
	double y;
};


void ausgabePunkte(Punkt);			//a)
Punkt erzeugePunkt(double, double);	//b)
Punkt addierePunkte(Punkt, Punkt);	//c)
double berechneAbstandUrsprung(Punkt);		//d)
double berechneAbstandPunkte(Punkt, Punkt);	//e)
void vertauscheKoordinatenPunkt(Punkt*);	//f)
void verschiebePunkt(Punkt*, double, double);	//g)


