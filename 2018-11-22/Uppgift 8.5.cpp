#include <iostream>
using namespace std;
int main()
{
	cout << "Ange ett antal" << endl;
	long antal;
	cin >> antal;
	long prickar = 0;
	while (prickar < antal)
	{
		cout << "*";
		prickar++;
	}
	
	
	
	
	
	return 0;
}
