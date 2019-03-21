#include <iostream>
using namespace std;

void ritalinje(int langd);

int main()
{
	int rader;
	cout << "Hur många rader vill du ha: " << endl;
	cin >> rader;
	
    ritalinje(rader);
    
	
	return 0;
}
void ritalinje(int langd)
{

		
	for( int i=0; i < langd; i++)
	{
		for (int k = 0; k <  langd; k++)
		{
			cout << "*";
			
		}
		cout << endl;
		
		for(int j =0; j <= i; j++)
		{
	    cout << " ";
	    }
    }
}
