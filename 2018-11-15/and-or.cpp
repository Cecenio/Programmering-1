#include <iostream>
using namespace std;
int main()
{
	// Om "AND", "OR" och "icke"
	// Om && (och)
	// || (eller)
	// ! (icke)
	
	// (        (false)       &&           (true)       )
	// (                         (false)                ) 
	if ( ( (false) || (false) ) && ( (true) && (true) ) )
	{
		cout << "Det sammantagna uttrycket mellan den yttre paranterserna är sant" << endl;
	}
	else
			cout << "Det sammantagna uttrycket mellan den yttre paranterserna är INTE sant" << endl;

// Exempel
	int a, b;
	
	cout << "Mata in två heltal   :>";
	cin >> a;
	cin >> b;
	// ANTAG a sätts till 1, b sätts till 2
	if ( ( (a>b) || (a<b) ) && ( ( a<b) && (a<b) ) )
	
 // if ( ( (falsk) || (true) ) && ( ( true) && (true) ) )
 // if (  (true) &&   (true)  )
 // Altså givet a=1, b=2 uttrycket sant
	
	cout << "SANT" << endl;
	
	else
        cout << "INTE SANT" << endl;	
	
	
	return 0;
}
