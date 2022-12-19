// Admiral.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
    // Eine "1" bedeutet, dass dort ein Schiffsteil ist.
    bool ships[5][5] = {
        { 0, 1, 1, 0, 0 },
        { 0, 0, 0, 0, 0 },
        { 0, 0, 1, 0, 0 },
        { 0, 0, 1, 0, 1 },
        { 0, 0, 1, 0, 1 }
    };
    const int CSHIPS = 7; // entspricht 7 Einsen
    // Variablen zum Zaehlen der Treffer und der Versuche
    int hits = 0;
    int numberOfTurns = 0;
    
    // Solange probieren, bis der/die Spieler*in alle Schiffe getroffen hat
    while (hits < CSHIPS) {
        int row, column;

        cout << "Koordinaten Auswahl\n";

        // Zeilenindex eingeben
        cout << "Geben Sie einen Zeilenindex zwichen 0 und 4 ein: ";
        cin >> row;

        // Spaltenindex eingeben
        cout << "Geben Sie einen Spaltenindex zwichen 0 und 4 ein: ";
        cin >> column;

        // Pruefen, ob an den Koordinaten ein Schiff existiert
        if (ships[row][column]) {
            // Bei einem Treffer setzte das Feld auf 0.
            ships[row][column] = 0;

            // Treffer hochzaehlen
            hits++;

            // Info, wieviele Treffer und wieviele Schiffe noch da
            cout << "Treffer! " << (CSHIPS - hits) << " uebrig.\n\n";
        }
        else {
            // Leider daneben!
            cout << "Kein Treffer!\n\n";
        }

        // Versuche hochzaehlen
        numberOfTurns++;
    }

    cout << "Bravo!\n";
    cout << "Sie haben mit " << numberOfTurns << " Versuchen gewonnen";

    return 0;
}