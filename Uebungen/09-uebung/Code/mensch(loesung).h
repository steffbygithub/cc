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
	// Schreibe fuer jedes private geschuetzte 
	// Feld jeweils eine set- und eine get-Methode
public:
	// Standardkonstruktor der Klasse Mensch
	Mensch();
	// Parametrisierter Konstruktor der Klasse Mensch
	Mensch(string, string, int);
	// Destruktor der Klasse Mensch
	~Mensch();
	// Schreibmethode fuer strVorname
	void setVorname(string);
	// Lesemethode fuer strVorname
	string getVorname();
	// Schreibmethode fuer strNachname
	void setNachname(string);
	// Lesemethode fuer strNachname
	string getNachname();
	// Schreibmethode fuer iAlter
	void setAlter(int);
	// Lesemethode fuer iAlter
	int getAlter();
	string toString();
};