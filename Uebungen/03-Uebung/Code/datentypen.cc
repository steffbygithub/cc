//	DataTypes.cpp

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    //	Variablen definieren ((-; dont do it like this way!!!!!

    float rf;
    double rd;
    long double rl;
    short is;
    int ii;
    unsigned int iu;
    long int il;
    unsigned long int ilu;
    long long int ill;


    //	Variablen setzen/initialisieren

    rf = 1.23456789f;
    rd = 1.23456789;
    rl = 1.23456789l;

    is = 123;
    ii = 123;
    il = 123;
    ill = 123;
    iu = 123;

    //	Ausgabe

    cout << endl << " Double" << endl;
    /*	Begrenzte Anzahl an Zeichen in der Ausgabe   */
    /*	Vorsicht bei Auf~ und Abrunden in Schleifen! */
    cout << "rd = " << rd << endl;

    cout.precision(10); /*	10 Zeichen-Ausgabe		*/
    cout << "rd = " << rd << endl;

    cout << endl << " Float" << endl;
    /*	Nur 8 Stellen sind bei float genau	*/
    cout << "rf = " << rf << endl;

    cout << endl << " Long Double" << endl;

    cout << "rl = " << rl << endl;

    cout << endl << " Integer" << endl;

    cout << "ii = " << ii << endl;
    cout << "iu = " << iu << endl;
    cout << "is = " << is << endl;
    cout << "il = " << il << endl;
    cout << "ill = " << ill << endl;

    cout << endl << "###########################################" << endl;
    cout << " Groesse der einfachen Datentypen: sizeof()" << endl << endl;

    cout << "Size of          bool:      " << sizeof(bool) << endl;
    cout << "Size of   signed char:      " << sizeof(signed char) << endl;
    cout << "Size of     short int:      " << sizeof(short int) << endl;
    cout << "Size of           int:      " << sizeof(int) << endl;
    cout << "Size of           int:      " << sizeof(ii) << endl;
    cout << "Size of  unsigned int:      " << sizeof(unsigned int) << endl;
    cout << "Size of      long int:      " << sizeof(long int) << endl;
    cout << "Size of  unsigned long int: " << sizeof(long int) << endl;
    cout << "Size of long long int:      " << sizeof(long long int) << endl;
    cout << endl;
    cout << "Size of         float:      " << sizeof(float) << endl;
    cout << "Size of        double:      " << sizeof(double) << endl;
    cout << "Size of   long double:      " << sizeof(long double) << endl;
    cout << endl;

    return 0;
}
