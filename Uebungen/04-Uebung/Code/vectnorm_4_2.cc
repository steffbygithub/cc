// vectnorm.cc : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

//	Dynamischer C++-Vector -std=c-11

#include <cmath>                        //   wg.   sqrt()
#include <iostream>
#include <vector>                       //   wg.    vector<>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned int n;
    cout << "\n Anzahl der Vektorelemente : ";
    cin >> n;                           // Dynamische Laenge des Vektors

    vector<double> v(n);                // Deklariere Vektor dieser Laenge

    for (size_t k = 0; k < v.size(); ++k) {    // Fuelle den Vektor mit Daten
        v.at(k) = 1.0 / (k + 1.0);
        if (k == 0) cout << v.at(k);           // Inhalt zur Kotrolle ausgeben
        else 
        cout << " , " << v.at(k) ;
    }

    double vlaenge = 0.0;
    for (size_t k = 0; k < v.size(); ++k) {    // Berechnung der Norm des Vektors
        vlaenge += v[k] * v[k];
    }
    vlaenge = sqrt(vlaenge);  // Grund für <cmath>

    cout << "\n Die Länge des Vektors betraegt: " << vlaenge << endl;

    return 0;
}
