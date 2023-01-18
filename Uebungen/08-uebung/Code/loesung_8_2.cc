// Template(8.2).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>

template <typename T, const int DIM = 1000>
struct TArray{
    //C++-Style Array
    std::array<T, DIM> aArray ;
};


int main() {

    TArray<int> aintArray;
    TArray<double> adblArray;

    // befuellen des int-Arrays
    for (size_t i = 0; i < aintArray.aArray.size(); i++) aintArray.aArray.at(i) = i;
    // Ausgabe des int-Arrays
    for (size_t i = 0; i < aintArray.aArray.size(); i++) std::cout << aintArray.aArray[i] << " ";

    std::cout << "\nSpeichergroesse: " << aintArray.aArray.max_size()*sizeof(int);
    std::cout << "\nAnzahl Elemente: " << aintArray.aArray.max_size() << std::endl;

    // befuellen des dbl-Arrays
    for (size_t i = 0; i < adblArray.aArray.size(); i++) adblArray.aArray[i] = i;
    // Ausgabe des dbl-Arrays
    for (unsigned int i = 0; i < adblArray.aArray.size(); i++) std::cout << adblArray.aArray[i] << " ";

    std::cout << "\nSpeichergroesse: " << adblArray.aArray.max_size()*sizeof(double);
    std::cout << "\nAnzahl Elemente: " << adblArray.aArray.max_size() << std::endl;
};