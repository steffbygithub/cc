// Template(overload).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

//Eine leere Klasse irgendetwas um darauf verweisen zu koennen
class A {};

// overload #1 vor dem sog. Point-of-Referenz von fkt()
template<class T>
void fkt(T) { std::cout << "#1\n"; } 
// overload #2 vor dem sog. Point-of-Referenz von fkt()
template<class T>
void fkt(T*) { std::cout << "#2\n"; } 
// Beide #1 and #2 werden in die Liste der Kandidaten aufgenommen
// #2 wird verwendet, weil Sie für den Auruf besser passt.
template<class T>
void g(T* t)
{
    (fkt)(t); // fkt() Point-of-Referenz
}
// overload #3 nach dem sog. Point-of-Referenz von fkt()
// ==> nur #1 wird in die Liste der Kandidaten aufgenommen!
//template<class T>
//void fkt(T*) { std::cout << "#3\n"; } // overload #3 nach dem fkt() POR

int main()
{
    A* ptr = nullptr;
    A ref;
    g(ptr); // POR  g() und fkt()
    g(&ref); // POR g() und fkt()
    fkt(ptr); //POR fkt() 
    fkt(ref); //POR fkt()
}

// Both #1 and #2 are added to the candidate list;
// #2 is selected because it is a better match.