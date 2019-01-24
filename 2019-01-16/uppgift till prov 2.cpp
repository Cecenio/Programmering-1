#include <iostream>
using namespace std;
int main ()
{
	int tal[10];
	
	
	
	for ( int n = 0; n < 10; n++ )
	{
		cout << "Ange ett tal: " << n << endl;
		cin >> tal[n];
		//Skriver in tal
		
	}

	for ( int n= 0; n < 10; n++ )
	{
		cout << tal[n] << ' ';
		//Före ändring
	}
	cout << endl;

	for ( int n = 0; n < 10; n++ )
	{
	
		//Ändrar
			tal[n]= tal[n] * -1;

	}
	
	
	
		for ( int n= 0; n < 10; n++ )
	{
		cout << tal[n] << ' ';
		//Efter ändring
	}
	cout << endl;
			
	return 0;
}
