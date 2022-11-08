// Addierer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using std::cout;
using std::cin;

int main() {
	int ix, iy;
	long lsum;
	cout << "Geben Sie den ersten Operanten ein: ";
	cin >> ix;
	cout << "Geben Sie den zweiten Operanten ein: ";
	cin >> iy;
	lsum = ix + iy;
	cout << "Die Summe ist: " << lsum;
	return 0;
}