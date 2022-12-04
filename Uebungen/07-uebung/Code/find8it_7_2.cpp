// find8it.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using std::array; using std::cout; using std::cin;

namespace UTIL {
    template<typename T, typename P>
    P find(P first, P behind_end, T x) {
        while (first != behind_end && *first != x) first++;
        return first; // Ergebnis
    }
}

int main()
{
    const int DIM = 10;
    int iSearch = 0;
    array<int, DIM> myArray = { 1,2,3,4,5,6,7,8,9,10 };
    array<int, DIM>::iterator it;
    do {
        cout << "\nGeben Sie einen positiven Suchwert ein: ";
        cin >> iSearch;
        it = UTIL::find(myArray.begin(), myArray.end(), iSearch);
        if (it == myArray.end()) {
            cout <<"\nnicht gefunden!";
            break;
        }
        else cout << "\n" << *it <<" gefunden!";
    } while (true);
    cout << " == > Programmende";
 }