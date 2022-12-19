#pragma once
#include <iostream>
using namespace std;
class Mensch
{
	// Deklaration der private-geschuetzten Felder
private:
	string strVorname;
	string strNachname;
	int iAlter;
	// Deklaration der public-Methoden
public:
	// Standardkonstruktor der Klasse Mensch
	Mensch();
	// Parametrisierter Konstruktor der Klasse Mensch
	Mensch(string, string, int);
	// Destruktor der Klasse Mensch
	~Mensch();
	// Schreibe fuer jedes private geschuetzte 
	// Feld jeweils einen set- und einen get-Prototyp

	// Schreibmethode fuer strVorname
   
	// Lesemethode fuer strVorname
   
	// Schreibmethode fuer strNachname
   
	// Lesemethode fuer strNachname
   
	// Schreibmethode fuer iAlter
   
	// Lesemethode fuer iAlter
   
	string toString();
};