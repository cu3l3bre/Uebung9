/*
Zusammengesetzte Datentypen

Erstellen Sie eine Funktionsbibliothek für einen eigenen Datentyp.
Schauen Sie sich das Minimalbeispiel dafür im Projektordner „Strukturen“ als Vorlage noch einmal an.

1. Definieren Sie einen Datentyp(„struct“), der einen Punkt im Koordinatensystem darstellt mit
zwei internen Daten „x“ und „y“ vom Typ „double“ in der Schnittstelle der Bibliothek(Header - Datei)

2. Zum Umgang mit diesem Datentyp sollen verschiedene Funktionen in einer Bibliothek bereitgestellt werden.
Diese Funktionen sollen in einer Schnittstelle(Headerdatei) deklariert werden und
einer gleichnamigen Quellcodedatei(Source) definiert werden.

Überlegen Sie selbst, welchen Rückgabetyp diese Funktionen haben.

a) Eine Funktion, welche die Koordinaten des Punktes auf der Konsole ausgibt.
b) Eine Funktion, die einen Punkt anhand der übergebenen Koordinaten erzeugt(„produziert“).
c) Funktionen, welche 2 Punkte addieren bzw.subtrahieren.
d) Den Abstand des Punktes zum Koordinatenursprung(0, 0) berechnet.
e) Eine Funktion, welche die Länge der Strecke zwischen 2 Punkten berechnet.
f) Fortgeschritten: Vertauschen der Koordinaten eines Punktes.
g) Fortgeschritten: Funktion(en) um einen Punkt horizontal bzw.vertikal zu verschieben.


Erstellen Sie selbstständig einige Punkte im Hauptprogramm, um Ihre Funktionen zu Testen
*/

#include <iostream>
#include "koordinaten.h"

using namespace std;


int main()
{
	cout << "Programm zu Uebung 9" << endl << endl;

	Punkt punkt1;
	Punkt punkt2;
	Punkt userPunkt;
	Punkt summePunkt;
	double abstandUrsprung = 0.0;
	double abstandPunkte = 0.0;

	double x = 999.9;
	double y = 888.8;

	punkt1.x = 1;
	punkt1.y = 1;

	punkt2.x = 26.5;
	punkt2.y = 26.5;

	cout << "Aufgabe 2a Ausgabe in der Konsole" << endl;
	ausgabePunkte(punkt1);
	ausgabePunkte(punkt2);
	cout << endl;

	cout << "Aufgabe 2b Erzeugen eines Punktes" << endl;
	cout << "Erzeuge einen Punkt mit den Koordinaten: " << x << " und " << y << endl;
	userPunkt = erzeugePunkt(x, y);
	ausgabePunkte(userPunkt);
	cout << endl;

	cout << "Aufgabe 2c Addition von 2 Punkten" << endl;
	summePunkt = addierePunkte(punkt1, punkt2);
	ausgabePunkte(summePunkt);
	cout << endl;

	cout << "Aufgabe 2d Abstand zum Ursprung(0,0)" << endl;
	abstandUrsprung = berechneAbstandUrsprung(punkt1);
	cout << "Der Abstand zum Ursprung ist: " << abstandUrsprung << endl;
	cout << endl;

	cout << "Aufgabe 2e Abstand zwischen zwei Punkten" << endl;
	abstandPunkte = berechneAbstandPunkte(punkt1, punkt2);
	cout << "Der Abstand zwischen den Punkten ist: " << abstandPunkte << endl;
	cout << endl;

	cout << "Aufgabe 2f Tauschen Koordinaten eines Punktes" << endl;
	ausgabePunkte(punkt1);
	vertauscheKoordinatenPunkt(&punkt1);
	ausgabePunkte(punkt1);
	cout << endl;

	cout << "Aufgabe 2g Verschiebe Punkt" << endl;
	ausgabePunkte(punkt1);
	verschiebePunkt(&punkt1, 5, 10);	//g)
	ausgabePunkte(punkt1);

	system("pause");
	return 0;
}