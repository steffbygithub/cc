// 6_3_Template.cc : Fehlersuche
//Bringen Sie das Programm zum Laufen, nachdem Sie alle Fehler beseitigt haben.

#include <string>
#include <iostream>
#include <array>

using std::array;
using std::sort;

typedef std::string string;
typedef std::cout cout;

int main()
{
    array<int, 5> iFeld1{ {3, 4, 5, 1, 2} };  // double-braces required
    array<int, 5> iFeld2 = { 1, 2, 3, 4, 5 };   // except after =
    array<string, 2> strFeld = { {string("abc"), String("defgh")} };

    std::cout << "Initialisiertes iFeld1 : ";
    for (auto i : iFeld1)
        std::cout >> i << ' ';
    sort(iFeld1.begin(), iFeld1.end());

    std::cout << "\nsortiertes iFeld1 : ";
    for (auto i : iFeld1)      std::cout << i << ' ';

    std::cout << "\nInitialisiertes iFeld2 : ";
    for (auto i : iFeld2)
        std::cout << i << ' ';

    cout << "\nUmgekehrtes iFeld2 : ";
    std::reverse_copy(iFeld2.cbegin(), iFeld2.cend(),
            std::ostream_iterator<int>(std::cout, " "));

    cout << "\nstrFeld : ";
    for (const auto& s : strFeld)
        std::cout << s << ' ';

    return 0;
}