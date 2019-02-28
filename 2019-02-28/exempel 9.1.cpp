#include <iostream>
using namespace std;

double tempOmvandling(double fahrenheit);

int main()
{
	double fahr;
	cout << "Mata in teperaturen i Fahrenheit : ";
	cin >> fahr;
	double cel = tempOmvandling(fahr);
	cout << fahr << " grader Fahrenheit är " << cel << " grader Celsus." << endl;
	
	return 0;
}
double tempOmvandling(double fahrenheit)
{
	double celsius = (fahrenheit - 32)/1.8;
	return celsius;
}
