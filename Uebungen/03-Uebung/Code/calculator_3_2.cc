#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int ix, iy;
    char c;
    long double lderg;

    cout << "Geben Sie den ersten Operanten ein: ";
    cin >> ix;
    cout << "Welche Operation wollen Sie anwenden (+,-,/,*,%): ";
    cin >> c;
    cout << "Geben Sie den zweiten Operanten ein: ";
    cin >> iy;
    switch (c)
    { 
        case '+': lderg = (long double)ix + iy; break;
        case '-': lderg = (long double)ix - iy; break;
        case '/': {
            if (iy > 0) lderg = (long double)ix / iy;
            else
                lderg = 0;
            break;
        }
        case '*': lderg = (long double)ix * iy; break;
        case '%': lderg = ix % iy; break;

        default: 
        {
            cout << "Operator wurde nicht erkannt ==> + wurde verwendet!\n";
            lderg = (long double)ix + iy;
        }
    }
    cout << "Das Ergebnis ist: " << lderg;
    return 0;
}