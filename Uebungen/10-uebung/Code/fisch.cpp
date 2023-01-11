// Implementation der Klasse Fisch in der Datei fisch.cpp
#include <iostream>
#include "fisch.h"
using std::cout; using std::endl;

Fisch::~Fisch() { cout << "Fisch ade! " << endl; }
void Fisch::move() { cout << "Schwimm im tiefen Wasser!" << endl; }
