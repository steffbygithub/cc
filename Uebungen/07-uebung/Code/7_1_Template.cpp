// 7_1_Template.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include <iostream>
#include <array>
using std::array; using std::cout; using std::cin;

int* find(int* array, int n, int x) {
    int* p = &array[0]; // lokale Kopie auf Anfang setzen
    for (int i = 0; i < n;  i++) {
        if (*p == x)
            return array; // gefunden ==> Pointer zurueckgeben
        p++;
    }
    return nullptr; // nicht gefunden Null-Pointer zurueckgeben
} 
int main()
{
    const int DIM = 10;
    int iSearch;
    int iFound = -1;
    int* iptr = &iFound;
    array<int,DIM> iArray{ 1,2,3,4,5,6,7,8,9,10};
// TODO
    cout << " ==>Programmende\n";
    return 0;
}
