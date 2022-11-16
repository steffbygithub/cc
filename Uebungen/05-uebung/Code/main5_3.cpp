// Notenliste_mit_Fkt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Author : Stefan Mueller
// Date of Construction:30.09.2022
// History: Checked in at 11.11.2022

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "mydefs.h"

using std::cout; using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;

int main()
{
    // Deklaration zweier leerer Vectoren
    vector<string>vectofNames;
    vector<float>vectofDegrees;

    // Deklaration und Initialisierung der Variablen
    string strName; float fDegree = 5.0F;
    char cInput = ' ';

    do
    {
        cInput = 0;
        cout << endl << endl;
        cout << "\'n\' = Namen und Note eingeben" << endl;
        cout << "\'l\' = letzten Eintrag loeschen" << endl;
        cout << "\'a\' = Alle Anzeigen" << endl;
        cout << "Geben Sie zum Beenden des Programms \'0\' ein!\n\n";
        cout << "Bitte waehlen Sie eine Option aus: ";
        cin >> cInput;
        cin.ignore(100, '\n'); // faengt zu lange Eingaben ab!

        if (cInput == 'n')
        {
            addZeile(vectofNames, vectofDegrees);
            clearScrn(false);      // Bildschirmanzeige loeschen Tip Windows/IX CLS/clear;
        }
        else if (cInput == 'l')
        {
            delZeile(vectofNames, vectofDegrees);
            clearScrn(true);
        }
        else if (cInput == 'a')
        {
            size_t iLines = showAll(vectofNames,vectofDegrees);
            cout << "\nEs wurden " << iLines << " ausgegeben.\n";
            clearScrn(true);
        }
        else continue;
    } while (cInput != '0');
    cout << "\n\nProgrammende!\n";
}
