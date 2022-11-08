// lb(Simple).cc 
//

// log(2).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

// Berechnung des log2 von X
// mit einer while-Schleife

#include <iostream>
using namespace std;

int main()
{
    int x;
    do {
        cout << endl << "Programm beenden mit der Eingabe von x = 0!";
        cout << endl << "Eingabe von x : ";
        cin >> x;
        const int C_SAVEX = x;  // Den Wert von x in einer Kostante sichern
        int i = -1;      // Initialisierung von Indexvariable vor dem Block!!
        while (x > 0) {
            i++;
            x = x / 2;
        }
        cout << "\nBinaerer Logarithmus von " << C_SAVEX;
        cout << " = " << i << endl;
        // Eingabewert zurückspeichern
        x = C_SAVEX;
    } while (x != 0);
    return 0;
}