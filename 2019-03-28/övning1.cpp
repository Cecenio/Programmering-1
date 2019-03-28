#include <iostream>
using namespace std;

void teckenbytare(int tal[], int &n);
void utskrivare(int tal[], int n);

int main()
{
	int heltal[4];	
	int antal;
	
	teckenbytare(heltal, antal);
	utskrivare(heltal, antal);
	
	
	
	
	
	return 0;
}
void teckenbytare(int tal[], int &n)
{	
	cout << "Skriv in dina värden (max 4st), avsluta med 0: " << endl;
	n= 0;
	cin >> tal[n];
		
	while( tal[n] != 0 )
	{
		if( n > 3)
		{
			cout << "Ops du angav du förmånga värden!" << endl;
			return;
			
		}
		n++;
		cin >> tal[n];
	}
	
}
void utskrivare(int tal[], int n)
{
	for(int i = 0; i < n; i++)
	{
		tal[i] = tal[i] * -1;
		cout << ' ' << tal[i] << endl;
		
		
	}
	
}
