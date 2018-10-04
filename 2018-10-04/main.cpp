#include <iostream>
using namespace std;
int main()
{
	// Tecken fält sida 42
	// Teckenfält kan hanters
	// som vilket fält som helst
	// Svenska tecken funkar inte med char
	/*char cf[6];
	cf[0] = 'H';
	cf[1] = 'e';	
	cf[2] = 'j';	
	cf[3] = ' ';	
	cf[4] = 'd';	
	cf[5] = 'u';  */
	char cf[] = {'H','e','j',' ','d','u'};	
	cout << cf[0] << cf[1] << cf[2] << cf[3] << cf[4] << cf[5] << endl;
    // Detta funkar med fält
	char namn[] = "Kalle";
	// cout skriver ut på skärmen
	cout << "namn: " << namn << endl; // '/0' tecknet
	                                  // läggs till
	                                  // automatiskt   
	cout << "cf: " << cf << endl;     // inget '/0' tecken
	                                  // läggs till, utskriften
	                                  // oförutsägbar        
	return 0;
}
