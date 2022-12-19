#include <iostream>
#include <string>
using std::string; using std::cout;
int main() { 
	string mycars[8];
	mycars[0] = "Opel Kadett B";
	mycars[1] = "Opel Kadett C";
	mycars[2] = "Opel Kadett D";
	mycars[3] = "VW Golf GTD";
	mycars[4] = "Mercedes 230 E";
	mycars[5] = "Mitsubishi L200";
	mycars[6] = "VW Passat";
	mycars[7] = "Renault Zoe";
	for (int i = 0; i < 8; i++) { 
		cout << mycars[i] << "\n";
	}
	return 0;
}