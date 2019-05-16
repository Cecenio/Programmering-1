#include <iostream>
using namespace std;

char omvandlaVersal(char a);

int main()
{
	
	char gemen;
	cout << "Zack är svart som fan: " << endl;
	cin >> gemen;

	cout << omvandlaVersal(gemen);
	
	return 0;
}
char omvandlaVersal(char a)
{
	int versal = (int)a - 32;
	
	return (char)versal;
}
