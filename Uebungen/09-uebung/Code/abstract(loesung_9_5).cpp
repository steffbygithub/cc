// abstract_9_5.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath> //sqrt M_PI

using std::cout; using std::endl;

class Figur
{
public:
	virtual double flaeche() const = 0;
	virtual double umfang() const = 0;
};

class Rechteck : public Figur
{
	double a,b; // Seiten
public:
	Rechteck(double A,double B) :a(A),b(B) {}
	double flaeche() const { return a * b; }
	double umfang() const { return 2.0 * (a + b); }
};

class Dreieck : public Figur
{
	double a,b,c; // Seiten
public:
	// c ist die Basis
	Dreieck(double A, double B, double C) : a(A), b(B), c(C){}
	double flaeche() const	{
	      return 0.5 * c * sqrt((a*a) - (0.25 *(c*c)));
	}
	double umfang() const { return a+b+c; }
};

class Kreis : public Figur
{
private:
	const double M_PI = 3.14159265358979323846;
	double r;
public:
	
	Kreis(double R) { r = R; }
	double umfang() const { return 2. * M_PI * r; }
	double flaeche() const { return M_PI * r * r; }
};

int main() 
{
	Rechteck objRect(5., 2.);
	Dreieck objTriangle(20.0,20.,10.);
	Kreis objCircle(9);

	cout << "Rechteck Umfang: " << objRect.umfang() << endl;
	cout << "Rechteck Flaeche: " << objRect.flaeche() << endl;

	cout << "Dreieck Umfang: " << objTriangle.umfang() << endl;
	cout << "Dreieck Flaeche: " << objTriangle.flaeche() << endl;

	cout << "Kreis Umfang: " << objCircle.umfang() << endl;
	cout << "Kreis Flaeche: " << objCircle.flaeche() << endl;
}