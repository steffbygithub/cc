// tmplFind8.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using std::array; using std::cin;using std::cout;

namespace UTIL{
    template<typename T, typename P>
    P find(P first, P behind_end, T x) {
	    while (first != behind_end && *first != x) first++;
	    return first; // Ergebnis
    }
}

int main()
{
    int iSearch;
    array<int, 10> iArray{ 1,2,3,4,5,6,7,8,9,10 };
//TODO
    cout << "nicht gefunden! ==>Programmende\n";
    return 0;
}