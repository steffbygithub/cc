// Notenliste.cc : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Author : Stefan Mueller
// Date of Construction:30.09.2022
// History: Checked in at 08.11.2022

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

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
        cin.ignore(100,'\n'); // faengt zu lange Eingaben ab!

        if (cInput == 'n')
        {
            cout << "Namen eingeben: ";
            cin >> strName;   //1 Was kann hier passieren?
            //3 getline(cin, strName); //3 jetzt passt es!
            vectofNames.push_back(strName);
            //2 cin.ignore(500, '\n'); //2 Schafft Abhilfe aber immer noch nicht ideal! 

            cout << "\nNote eingeben: ";
            cin >> fDegree;
            vectofDegrees.push_back(fDegree);
            system("clear");      // Bildschirmanzeige loeschen Tip Windows/IX CLS/clear
        }
        else if (cInput == 'l')
        {
            cout << strName << " mit der Note " << fDegree <<" wird geloescht!" << endl;
            vectofNames.pop_back();
            vectofDegrees.pop_back();
            int ch = getchar(); // Anzeige bis zum Tastendruck anhalten
            system("clear");      // Bildschirmanzeige loeschen 
        }
        else if (cInput == 'a')
        {
            int i = 0;
            for (string name : vectofNames) {
                cout << "\nName: " << name << " hat die Note: " << vectofDegrees.at(i++);
            }
            int ch = getchar();     // Anzeige bis zum Tastendruck anhalten
            system("clear");          // Bildschirmanzeige loeschen
        }
        else continue;
    } while (cInput != '0');
    cout << "\n\nProgrammende!\n";
}
