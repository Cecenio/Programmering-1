#include <iostream>
using namespace std;
int main()
{
	cout << "Mata in ett tecken (a-z, A-Z)" << endl;
    cout << ":> ";
    char tecken; 
    cin >> tecken;


    if (tecken == 'a')
    {
       cout << "(if-sats)Du matade in a" << endl;
    }
    else if (tecken == 'A')
    {
		cout << "Du matade in A"  << endl;
	}
	
	else
	    cout << "(if-sats) Hittar inte tecknet du matade in" << endl;
	
	switch (tecken)
	{
		case 'a': 
		cout << "(switch-case)Du matade in a" << endl;
		// fler saker
		//....
		break;
		case 'A': 
		cout << "(switch-case)Du matade in A" << endl;
		// fler saker
		//....
		break;
		default: 
		cout << "Hittar inte tecknet du matade in" << endl;
		
		
	};
	
	
	
	return 0;
}
