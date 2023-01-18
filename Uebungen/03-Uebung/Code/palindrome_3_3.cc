// Palindrome.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout << "Geben Sie eine positive Ganzzahl ein: ";
    cin >> num;
    //Meken der Eingabe
    n = num;

    do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << " Das Umkehren der Nummer ergibt: " << rev << endl;
    //Vergleich, ob die Eingabe mit der Reverse Nummer uebereinstimmt
    if (n == rev)
        cout << "Die Nummer ist ein Palindrome.";
    else
        cout << "Die Nummer ist kein Palindrome.";

    return 0;
}