#include <iostream>
using namespace std;

double basarea(double radie);

int main()
{
	double radie;
	cout << "Mata in en radie: ";
	cin >> radie;
	
	double Area = basarea(radie);
	cout << radie << " L.e radie ger " << Area << " L.e^2." << endl;
	
	return 0;
}
double basarea(double radie)
{
	double Area = (radie * radie) * 3.14159265359;

	return Area;
}
