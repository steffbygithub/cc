// Implementation der Klasse Pinguin in der Datei Pinguin.cpp
#include <iostream>
#include "pinguin.h"
using std::cout; using std::endl; 

Pinguin::~Pinguin() { cout << "Free me Willy!!! " << endl; }
void Pinguin::move() { cout << "Schwimmen geht besser als Fliegen! " << endl; }
