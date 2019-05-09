#include <iostream>
using namespace std;

double omkretsCirkel(double radie);

int main()
{
	int radie;
	cout << "Skriv in radien på din cirkel: " << endl;
	cin >> radie;
	
	cout << "Omkretsen är " << omkretsCirkel(radie) <<" l.e" << endl;
	
	
	
	
	
	
	
	return 0;
}
double omkretsCirkel(double radie)
{
	double omkrets = radie * 3.14 * 2;
	
	return omkrets;
	
}
