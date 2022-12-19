// Mensch_9_2.cpp : Implementierung der Klasse Mensch
//

#include <iostream>
#include <sstream>
#include "mensch.h"

using namespace std;
//Standardkonstruktor der Klasse Mensch
Mensch::Mensch()
{
    cout << "Standardkonstruktor der Klasse Mensch" << endl;

}
// Parametrisierter Konstruktor der Klasse Mensch
Mensch::Mensch(string vn, string nn, int a) {

}
// Destruktor der Klasse Mensch eigentlich nicht erforderlich!
Mensch::~Mensch() {

}
// Schreibmethode fuer strVorname

// Lesemethode fuer strVorname

// Schreibmethode fuer strNachname

// Lesemethode fuer strNachname

// Schreibmethode fuer iAlter

// Lesemethode fuer iAlter

// Gibt das aktuelle Objekt als Default-String aus
string Mensch::toString()
{
    stringstream ss;
    ss << getVorname() << " "
       << getNachname() << " ist "
       << getAlter() << " Jahre alt";
    return ss.str();
}