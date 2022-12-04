// ascii.cc : Diese Datei enthält die Funktion "main".
//
#include <iostream>

using namespace std;

int main() {

	for (int i = 31; i < 256; i++)
	{
		cout << "  i = " << i << " ==> char = " << char(i);
		if (i % 3 == 0) cout << endl;
	}
	return 0;
}
