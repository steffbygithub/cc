// mycars.cc : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;

int main() {
    const int MAXCARS = 8;
    string bettercars[] = { "Opel Kadett B","Opel Kadett C","Opel Kadett D" };
    string mycars[8]; // MAXCARS
    mycars[0] = "Opel Kadett B";
    mycars[1] = "Opel Kadett C";
    mycars[2] = "Opel Kadett D";
    mycars[3] = "VW Golf GTD";
    mycars[4] = "Mercedes 230 E";
    mycars[5] = "Mitsubishi L200";
    mycars[6] = "VW Passat";
    mycars[7] = "Renault Zoe";

    for (int i = 0; i < 8; i++) { // MAXCARS
        cout << mycars[i] << "\n";
    }

    for (int car : mycars) {
        cout << car << "\n";
    }
    
    for (auto car : bettercars) {
        cout << car << "\n";
    }
    return 0;
}

