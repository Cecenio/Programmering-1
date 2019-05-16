#include <iostream> 
using namespace std;

void ritaRomb(int hojd);

int main()
{
	int hojd;
	cout << "Hur hög ska din romb vara: " << endl;
	cin >> hojd;
	cout << endl;
	
	ritaRomb(hojd);
	
	return 0;
}
void ritaRomb(int hojd)
{
	
	for(int n = 0; n < hojd; n++)
	{
	cout << "*****" << endl;
	{
    for( int k = 0; k <= n; k++)
         cout << 'a';
	}
}
}
