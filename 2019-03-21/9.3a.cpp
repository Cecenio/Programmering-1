#include <iostream>
using namespace std;

void ritalinje(int langd);

int main()
{
	int prickar;
	cout << "Hur många prickar vill du ha: " << endl;
	cin >> prickar;
	
    ritalinje(prickar);
	

	
	
	
	
	return 0;
}
void ritalinje(int langd)
{
	for( int i=0; i < langd; i++)
	{
		cout << "*";
		
	}
	
}
