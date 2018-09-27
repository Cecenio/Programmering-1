#include <iostream>
using namespace std; 
int main()
{
	
	// Varibaler med ETT värde
	int x = 3;
	// Variabler med mpnga värden, fält
	// Åtkomst genom indexering
	double talfalt [4];
	talfalt [2] = 4;
	x = talfalt[2];
	cout << x << endl;
	// Här kan finnas vad som helst
	// Talfalt[0] har vi inte gett något värde.
	//cout << talfalt[0] << endl;
	int a[3];
	a[0] = 0;
    a[0] = 1;
    a[0] = 2;
    // Du kan tildela fältet värden
    // samtidigt som du deklarerar
    int b[3] = {0,1,3};
    // Alternativt kan du skriva
    // (kompilatorn kan räkna)
    // int b[] = {0,1,3};
    
    
    
	return 0;
}
