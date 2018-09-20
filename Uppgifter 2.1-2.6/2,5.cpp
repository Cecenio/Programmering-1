#include <iostream>
using namespace std;
int main()
{
	cout << "Skriv en bokstav: " << endl;
	
	
	char tecken1;
	cin >> tecken1;
	
	char tecken2;
	char tecken3;
	
	tecken2 = tecken1 + 1;
	tecken3 = tecken1 + 2;
	
	
    cout << tecken1 << tecken2 << tecken3;
	
	return 0;
}
