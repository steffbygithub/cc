// stl-recommendations.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Quelle https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

#include <iostream>
#include <array>
#include <vector>
using std::array;
using std::vector;
using std::cout;
// Schritt 9 Prototyp void printIt (vector<int>&);
// Schritt 8  Modularisierung
void printIt(vector<int>& v)
{
    for (auto&& element : v)
    { // a universal Reference && siehe 
      //https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers
        cout << element << " , ";
    }
}
int main()
{
    const int SIZE = 5;
    int ibadcarray[SIZE] = { 1,2,3,4,5 }; // wie gewonnen so zerronnen!

    array<int, SIZE> ibettercpparray = { 1,2,3,4,5 }; //Step 1 Statisches Array
    vector<int> idynvector(5);                     //Step 2 dynamischer Vector
    idynvector = { 6, 7, 8, 9, 10 };               //Step 3 Initialisierung
    idynvector[0] = 6;                    //Step 4 Init über konstante Pointer
    idynvector[1] = 7;
    idynvector[2] = 8;
    idynvector[3] = 9;
    idynvector[4] = 10;

    for (int i = 0; i < idynvector.size(); i++) //Step 5 mit Schleife
    {
        idynvector.at(i) = 5 + i;
    }

    cout << "\n";
    for (auto element : ibettercpparray) {

        cout << element << " , ";
    }
    cout << "\n";
    // Step 6 auto nutzen ==>  lasse den Compiler entscheiden
    for (auto element : idynvector) {
        cout << element << " , ";
    }
    // Step 7 Auslagern in eine Funktion
    printIt(idynvector);
}
