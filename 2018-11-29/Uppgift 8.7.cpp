#include <iostream>
using namespace std;
int main()
{
 int passagerare = 0;
	 int val;
	while (true){
		
	
	 
	 cout << "Skriv 1 för att nollställa: " << endl;
	 cout << "Skriv 2 för att öka antalet passagerare med en: " << endl;
	 cout << "Skriv 3 för att minska antalet passagerare med en: " << endl;
	 cout << "Skriv 4 för att Skriva ut antalet passagerare: " << endl;
	 cin >> val;

	
	if(val==1){
		passagerare = 0;
	}
	
	else if(val==2){
		passagerare++;
	}
	
		else if(val==3){
		passagerare--;
	}
	
		else if(val==4){
		cout << "Antalet Passagerare: " << passagerare << endl;
		cout << endl;
	}
	
}
	
	
	
	
	
	
	return 0;
}
