#include <iostream>
using namespace std;
int main()
{
	
	char fortsatt = 'j'; 
	
	int tal1, tal2;
	tal2 = 0;
	
	while ( fortsatt=='j'|| fortsatt== 'J' )
	{
	cout << "Mata in ett tal: " << endl;
	cin >> tal1;
	tal2= tal1+tal2;
	
	cout << "Summan: " << tal2 << endl;
		
	cout << "Fortsätt tryck J: ";
	cin >> fortsatt;
	

	}
	
	
	
	
	
	return 0;
}

//Skriv ett program som beräknar summan av inmatade tal. Användaren ska kunna fortsätta att mata in tal eller välja att avsluta. 
//Användaren ska kunna svara med STOR bokstav (J eller N) eller med liten bokstav (j eller n).
/*Mata in ett tal:
4
Summan är: 4
Vill du fortsätta (J/N)
J
Mata in ett tal:
-5
Summan är: -1
Vill du fortsätta (J/N)
j
22.4
Summan är: 21.4
Vill du fortsätta (J/N)
N
Summan är: 21.4
Programmet är avslutat, tack för att du använder summaberäknaren!
*/
