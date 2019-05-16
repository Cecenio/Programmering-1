#include <iostream>
using namespace std;

bool siffra(char tecken);

int main()
{
	char tecken;
	cout << "Skriv in ditt tecken: " << endl;	
	cin >> tecken;
	cout << siffra(tecken);
	return 0;
}
bool siffra(char tecken)
{
	
	if( tecken >47 && tecken < 58)
	{
		return true;
	}
	
	
	return false;

	
}
