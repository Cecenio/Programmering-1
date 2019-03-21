#include <iostream>
using namespace std;

double omkretscirkel(double radie);

int main()
{
	double radie;
	cout << "Skriv raiden till din cirkel: " << endl;
	cin >> radie;
	
	radie = omkretscirkel(radie);
	
	cout << "Detta är omkretsen på cirkeln: " << radie << endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
double omkretscirkel(double radie)
{
	
	double omkrets = (6.28 * radie);
	
	
	
	return omkrets;
}
