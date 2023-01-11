#include <iostream>
#include <vector>
#include "mensch.h"

int main() {
	//unterschiedliche Varianten erklaeren
	std::vector<Mensch&> objekte;
	//std::vector<Mensch&> objekte; //Warum werden nun bei push_back Destruktoren gerufen?
	//std::vector<Mensch> objekte;  //Und warum hier?
	// Objekte anlegen
	Mensch noName;
	Mensch first("Adam", "Smith", 25);
	Mensch second("Eva", "Meyers", 21);
	// Objekte im Vektor ablegen 
	objekte.push_back(noName);
//	objekte.push_back(noName);
	objekte.push_back(first);
	objekte.push_back(second);
	// Bereichsbezogen ausgeben
	for(auto e : objekte)
	cout << e.toString() << endl; // Warum hier der Destruktor?
} // Warum hier der Destruktor?