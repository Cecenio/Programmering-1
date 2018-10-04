#include <iostream>
#include <string>
using namespace std;
int main()
{
	// Datatyp namn
	//ex int i;
	//class namn
	//ex
	string s, s1;
	// Tilldeling
	s = "Hej Kalle!";
	s1 = "xx";
	// Slå ihop strängar
	string str = s+s1;
	cout << str << endl; 
	int position = s.find('l',0);
	cout << position << endl;
	
	return 0;
}
