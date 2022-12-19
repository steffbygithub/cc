// cpp-array.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <string>
#include <iostream>
#include <algorithm>
#include <array>

using std::array;
typedef std::string string;

int main()
{
    array<int, 5> iFeld1{3, 4, 5, 1, 2};  
    array<int, 5> iFeld2 = { 1, 2, 3, 4, 5 };   // except after =
    array<string, 2> strFeld = { {string("abc"), "defgh"} };

    std::cout << "Initialisiertes iFeld1 : ";
    for (auto i : iFeld1)
        std::cout << i << ' ';
    // container operations are supported
    std::sort(iFeld1.begin(), iFeld1.end());

    std::cout << "\nsortiertes iFeld1 : ";
    for (auto i : iFeld1)      std::cout << i << ' ';

    std::cout << "\nInitialisiertes iFeld2 : ";
    for (auto i : iFeld2)
        std::cout << i << ' ';

    std::cout << "\nUmgekehrtes iFeld2 : ";
    std::reverse_copy(iFeld2.begin(), iFeld2.end(),
        std::ostream_iterator<int>(std::cout, " "));

    // ranged for loop is supported
    std::cout << "\nstrFeld : ";
    for (auto& s : strFeld)
        std::cout << s << ' ';

    return 0;
}