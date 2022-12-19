// Template(FixesdynArray).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using namespace std;

template <typename T,int DIM = 1000000>
struct TArray {
    // C-Style
    // T aArray[DIM];
    // c++-Style
    //array<T, DIM> aArray;
    T* aptr = new T[DIM];
    long elements = DIM;
    inline void freeMemory() {
        delete[] aptr;
        aptr = nullptr;
        elements = 0;
    }
    inline long getMemorySize() { return elements*sizeof(T); }
    inline long getSize() { return DIM; }
    inline bool isAllocated() {
        if (aptr != nullptr) return true;
        else return false;
    }

};

int main()
{
    TArray<int> itest;
    if (itest.isAllocated())
        std::cout << "\nSpeicherbelegung: " << itest.getMemorySize() << endl;
    else
        std::cout << "\nSpeicherallocierung fehlgeschlagen!";
    for (int i = 0; i < itest.getSize(); i++) itest.aptr[i] = i;
    for (int i = 0; i < itest.getSize(); i++) {
        if ( i % 999 == 0) std::cout << *(itest.aptr + i) << " ";
    }
    itest.freeMemory();
    std::cout << "\nSpeicherbelegung: " << itest.getMemorySize() << endl;

    TArray<double> dtest;
    std::cout << "\nSpeicherbelegung: " << dtest.getMemorySize() << endl;
    for (int i = 0; i < dtest.getSize(); i++) *(dtest.aptr + i) = i;
    for (int i = 0; i < dtest.getSize(); i++) {
        if (i % 999 == 0) std::cout << *(dtest.aptr + i) << " ";
    }

    dtest.freeMemory();
    std::cout << "\nSpeicherbelegung: " << dtest.getMemorySize() << endl;

    int i;
    cin >> i;
}

