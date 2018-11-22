#include <iostream>
using namespace std;
int main()
{
	long antal;
	long prickar = 0;
	long rader = 0;
	cout << "Ange ett antal prickar" << endl;
	cin >> antal;
	cout << "Ange ett antal rader" << endl;
    cin >> rader;
    
    while (rader > 0)
    {
    
			while (prickar < antal)
			{
				cout << "*";
				prickar++;
			}
	prickar = 0;
	cout << endl;
	rader = rader - 1;
    }
	
	
	
	return 0;
}
