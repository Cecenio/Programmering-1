#include <iostream>
using namespace std;

int main()
{
	// double pengar, kostnad;
	//cout << "Hur mycket pengar har du? ";
	//cin >> pengar;
	//cout << "Hur mycket ska du handla för? ";
	//cin >> kostnad;
	//int uttag = 0;
	//
	//if (pengar < kostnad)
	//{
	//	double skillnad = kostnad-pengar;
		
	//	int hundratal = (int)(skillnad/100);
	    
	//    uttag = (hundratal+1)*100;
	//   cout << "Ta ut " << uttag << " Kronor.\n";
	//}
	
	
	//cout << "Efter köpet återstår " << pengar+uttag-kostnad << " kronor.";
	
	
	
	
	double vindstyrka, hopp;
	cout  << "Hur långt vill du hoppa: ";
	cin >> hopp;
	cout << "Hur hög är vindstyrkan: ";
	cin >> vindstyrka;
	
	if ( (hopp > 7.92) && (vindstyrka < 2.0) )
	{
		cout << "Du kommer slå rekord!";
	} 
	else 
	{
		cout << "Du kommer inte slå rekord!";
	}
	
	
	
	
	
	return 0;
}
