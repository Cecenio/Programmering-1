#include <iostream>
using namespace std;

void areacirkel(double &tal);

int main()
{
	double diameter;
	cout << "Ange diametern på din cirkel: " << endl;
	cin >> diameter;
	
	areacirkel(diameter);
	
	
	
	
	
	
	return 0;
}
void areacirkel (double &tal)
{
	double area = (3.14*(tal*tal))/4;	
	
	cout << "Arean på din cirkel är: " << area << "Cm^2" << endl;
	
	
}
