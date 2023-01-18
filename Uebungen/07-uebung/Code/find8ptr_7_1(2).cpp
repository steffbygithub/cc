// find8ptr(2).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using std::array; using std::cout; using std::cin;
// MAX Anzahl der Elemente des Arrays

int* find(int* parray, int n, int x) {
    // am besten den Pointer bei jedem Aufruf auf den Anfang setzen!
    int *p = &parray[0]; // wichtig lokale Kopie verwenden
    for (int i = 0; i < n; i++) {
        if (*p == x)
            return parray; // gefunden ==> Übergabe-Pointer zurueckgeben
        p++;
    }
    return nullptr; // nicht gefunden Null-Pointer zurueckgeben
}

int main() {
    const int DIM = 10;
    int iSearch = 0;
    array<int, 10> myArray = { 1,2,3,4,5,6,7,8,9,10 };
    int* iptr = &myArray[0];
    while (iptr != nullptr) {        
        cout << "\nGeben Sie einen positiven Suchwert ein: ";
        cin >> iSearch;
        iptr = find(iptr, DIM, iSearch);
        if (iptr == nullptr) {
            cout << "\nnicht gefunden!";
            break;
        }
        else cout << "\n" << *iptr << " gefunden!";
    };
    cout << " == > Programmende";
}
