// Template(8.1).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
template <typename T, const int DIM = 1000>
struct TArray {
        //C-Style Array
        T aArray[DIM];
        inline size_t getMemorySize() { return DIM * sizeof(T); }
        inline size_t getSize() { return DIM; }
};

int main(){

    TArray<int> aintArray;
    TArray<double> adblArray;

    // befuellen des int-Arrays
    for (size_t i = 0; i < aintArray.getSize(); i++) aintArray.aArray[i] = i;
    // Ausgabe des int-Arrays
    for (size_t i = 0; i < aintArray.getSize(); i++) std::cout << aintArray.aArray[i] << " ";

    std::cout << "\nSpeichergroesse: " << aintArray.getMemorySize();
    std::cout << "\nAnzahl Elemente: " << aintArray.getSize() << "\n";

    // befuellen des dbl-Arrays
    for (size_t i = 0; i < adblArray.getSize(); i++) adblArray.aArray[i] = i;
    // Ausgabe des dbl-Arrays
    for (unsigned int i = 0; i < adblArray.getSize(); i++) std::cout << adblArray.aArray[i] << " ";

    std::cout << "\nSpeichergroesse: " << adblArray.getMemorySize();
    std::cout << "\nAnzahl Elemente: " << adblArray.getSize();

};