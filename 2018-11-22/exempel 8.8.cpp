//EXEMPEL 8.8, sidan 114 
#include <iostream>
using namespace std;
int main()
{
	cout << "Beräkna produkter av två tal" << endl;
	cout << "Skriv \'j\' för att starta" << endl;
	char fortsatt;
	cin >> fortsatt; // Inmatning av ett tecken
	int tal1, tal2, produkt; // Tal som ska multipliceras
	while (fortsatt=='j')
	{
		cout << "Tal 1: ";
		cin >> tal1;
		cout << "tal 2: ";
		cin >> tal2;
		produkt = tal1*tal2;
		cout << tal1 << '*' << tal2 << '=' << produkt << endl;
		cout << "Fortsatt? (j/n): "; 
		cin >> fortsatt;
		
	}
	
	
	
	
	
	
	return 0;
}
