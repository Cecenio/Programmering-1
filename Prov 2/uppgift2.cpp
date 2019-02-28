// Caesar Brag, uppgift 2
#include <iostream>
using namespace std;
int main()
{
	int ratt = 69;
	int gissning = 0;
	int gissningar = 0;
	
		cout << "Gissa ett tal mellan 0 och 100: " << endl;
	
	for ( int n=0; gissning!=ratt; n++)
	{
		cin >> gissning;
		gissningar = n;
		
		if ( gissning > ratt)
		{
			cout << "Fel! För stort. Gissa igen: " << endl;
		}
		
		if ( gissning < ratt)
		{
			cout << "Fel! För litet. Gissa igen: " << endl;
		}
		
	}	
	
	cout << "Grattis du gissade rätt på försök nr " << gissningar+1 << endl; 
	
	
	
	
	
	return 0;
}
