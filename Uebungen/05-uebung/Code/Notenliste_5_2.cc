// Notenliste_5_2.cc : Funktionen ausgelagert und Inline
// Author : Stefan Mueller
// Date of Construction:30.09.2022
// History: Checked in at 14.11.2022

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::cout; using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;

void addZeile(vector<string>& parmName, vector<float>& parmDegree);
void delZeile(vector<string>&, vector<float>&);
// 2 Zeigt die Liste an, loescht den Bildschirm und zeigt danach die Anzahl der Zeilen an
size_t showAll(vector<string>&, vector<float>&);

// 1 Loeschen des Bildschirms
inline void clearScrn(bool byes) {
    if (byes) int ch = getchar(); // Anzeige bis zum Tastendruck anhalten
    system("clear");      // Bildschirmanzeige loeschen 
}

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
            clearScrn(false);      
            // Bildschirmanzeige loeschen Tip Windows/IX CLS/clear;
        }
        else if (cInput == 'l')
        {
            delZeile(vectofNames, vectofDegrees);
            clearScrn(true);
        }
        else if (cInput == 'a')
        {
            size_t iLines = showAll(vectofNames, vectofDegrees);
            cout << "\nEs wurden " << iLines << " ausgegeben.\n";
            clearScrn(true);
        }
        else continue;
    } while (cInput != '0');
    cout << "\n\nProgrammende!\n";
}

size_t showAll(vector<string>& vnames, vector<float>& vdegrees) {
    int i = 0;
    for (string name : vnames) {
        cout << "\nName: " << name << " hat die Note: " << vdegrees.at(i++);
    }
    return vnames.size();
}

void addZeile(vector<string>& parmNames, vector<float>& parmDegrees)
{
    string strName = " ";
    float fDegree;
    cout << "Namen eingeben: ";
    getline(cin, strName);
    parmNames.push_back(strName);

    cout << "\nNote eingeben: ";
    cin >> fDegree;
    parmDegrees.push_back(fDegree);
}
void delZeile(vector<string>& parmNames, vector<float>& parmDegrees)
{
    if (!parmNames.empty()) {
        cout << parmNames.at(parmNames.size() - 1) << " mit der Note ";
        // alternativ paramNames.back()
        cout << parmDegrees.at(parmDegrees.size() - 1) << " wird geloescht!" << endl;
        // alternativ paramDegrees.back()
        parmNames.pop_back();
        parmDegrees.pop_back();
    }
    else {
        cout << "Die Notenliste ist leer!" << endl;
    }
}