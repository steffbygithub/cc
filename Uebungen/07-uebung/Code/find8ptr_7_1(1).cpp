// find8ptr.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using std::array; using std::cout; using std::cin;
// MAX Anzahl der Elemente des Arrays

int* find(int* parray, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*parray == x)
            return parray; // gefunden ==> Pointer zurueckgeben
        parray++;
    }
    return nullptr; // nicht gefunden Null-Pointer zurueckgeben
}

int main() {
    const int DIM = 10;
    int iSearch = 0;
    array<int, 10> myArray = { 1,2,3,4,5,6,7,8,9,10 };

    do {
        int* iptr = &myArray[0];
        cout << "\nGeben Sie einen positiven Suchwert ein: ";
        cin >> iSearch;
        iptr = find(iptr, DIM, iSearch);
        if (iptr == nullptr) {
            cout << "\nnicht gefunden!";
            break;
        }
        else cout << "\n" << *iptr << " gefunden!";
    }  while (true);
    cout << " == > Programmende";
 }
