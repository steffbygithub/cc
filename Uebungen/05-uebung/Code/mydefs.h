#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::vector;
using std::string;

// 1 Loeschen des Bildschirms
inline void clearScrn(bool byes) {
    if (byes) int ch = getchar(); // Anzeige bis zum Tastendruck anhalten
    system("clear");      // Bildschirmanzeige loeschen 
}

// 2 Zeigt die Liste an, loescht den Bildschirm und zeigt danach die Anzahl der Zeilen an
size_t showAll(vector<string>&, vector<float>&);

// 3 Anlegen eines Eintrags in der Notenliste
void addZeile(vector<string>& parmName, vector<float>& parmDegree);

// 4 Loeschen des letzten Eintrags in der Notenliste
void delZeile(vector<string>&, vector<float>&);
