#include <iostream>
using namespace std;

char tecken(double tal);

int main()
{
	double tal;
	cout << "Skriv in ditt tal: " << endl;
	cin >> tal;
	cout << "Ditt tal är " << tecken(tal) << endl;
	
	return 0;
}
char tecken(double tal)
{
	char tecken;
	if( tal < 0)
	tecken = '-';
	else
	tecken = '+';
    return tecken;
}
