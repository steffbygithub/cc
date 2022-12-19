// log(2).cpp :  Berechnung des log2 von x als reelle Zahl 
//in einer while-Schleife

#include <iostream>
using namespace std;

int main()
{
    double x;
    do {
        cout << endl << "Programm beenden mit der Eingabe von x = 0!";
        cout << endl << "Eingabe von x : ";
        cin >> x;
        const double C_SAVEX = x;  // Den Wert von x in einer Kostante sichern
        int i = -1;      // Initialisierung von Indexvariable vor dem Block!!
        while (x > 0 + DBL_EPSILON) {
            i++;
            x = x / 2.0 ;
        }
        // bis die Null und der Epsilon-Wert des Datentyps double erreicht wird,
        // werden 51 Iterationen ausgeführt und somit abgezogen
        // ohne Epsilon werden 1074 ausgeführt und muessten abgezogen werden
        i -= 51;
        cout << "\nBinaerer Logarithmus von " << C_SAVEX;
        cout << " = " << i << endl;
        x = C_SAVEX;
    } while (x != 0);
    return 0;
}