// Implementation der Klasse Vogel in der Datei Vogel.cpp
#include <iostream>
#include "vogel.h"
using std::cout; using std::endl;

Vogel::~Vogel() { cout << "Herunter kommen sie alle!" << endl; }
void Vogel::move() { cout << "Ueber den Wolken muss die Freiheit wohl grenzenlos sein! " << endl; }
