// polymorph.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
#include "tier.h"
#include "fisch.h"
#include "vogel.h"
#include "pinguin.h"
#include <iostream>
#include <vector>

int main() {
	std::vector<Tier*> animals;
	auto *willy = new Fisch;	  // Wer sonst ein free Willy...
	animals.push_back(willy);
	auto *woodstock = new Vogel;	  // Natürlich ein Woodstock...
	animals.push_back(woodstock);
	auto* tux = new Pinguin; // Was sonst ein tux...
	animals.push_back(tux);
	//for (int i = 0; i < 3; i++) animals.at(i)->move();
	for (auto ptr : animals) ptr->move();
	for (auto it = animals.begin(); it < animals.end(); ++it) (*it)->move();
	for (int i = 2; i >= 0; i--) delete animals.at(i); 
	// freigeben der Objekte im Speicher in umgekehrter Reihenfolge wichtig!
	// 
	//delete tux;
	//delete willy;
	//delete woodstock;

	animals.clear(); // nur die Verweise im vector werden zurückgesetzt
	std::cout << animals.capacity() << " nach clear\n";
	animals.shrink_to_fit();
	std::cout << animals.capacity() << " nach shrink_to_fit\n";

	return 0;
}

