// lsg10_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
// Aufgabe 1.1
#include <iostream> // cout
#include <vector>
//Speichern Sie in einem Container eine variable Menge von Quadratzahlen.Initialisieren
//Sie den Container mit den Quadraden von 1 bis 5.
//Geben Sie die Inhalte des Containers über einen Iterator in einer for-Schleife aus.
int main() {
	
	std::vector<int> quadrate{ 1, 4, 9, 16, 25 };
	quadrate.reserve(50); // 50 weitere Elemente reservieren
	quadrate.push_back(36); 
	quadrate.push_back(49);
	//1.2 Erweitern Sie das Programm um einen Container, der eine variable Anzahl von
	// Quadratwurzelwerten enthaelt.Initialisieren Sie den Container mit den 
	// Wurzeln aus 0 bis 4.
	// Waere es möglich, mit Hilfe des Schlüsselwortes „auto“ die Ausgabeschleife
	// fuer beide Container zu nutzen ?
	 std::vector<double> wurzeln{ 0,1, 1.4142135623731, 1.7320508075689, 2.};
	 //std::vector<double> container = static_cast<double>(quadrate);
	for (auto it = quadrate.begin(); it < quadrate.end();it++) // auto
		std::cout << *it << " "; 

	for (auto it = wurzeln.begin(); it < wurzeln.end(); it++) // auto
		std::cout << *it << " ";
	wurzeln.resize(50);
	std::cout << std::endl;
	std::cout << quadrate.capacity() << " \n";
	std::cout << quadrate.size() << "\n";
	std::cout << wurzeln.capacity() << " \n";
	std::cout << wurzeln.size() << "\n";
}
