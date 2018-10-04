/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "e-spost: ";
	string epost;
	getline(cin, epost);
	int pos = epost.find('@', 0);
	string person = epost.substr(0, pos);
	int start = pos +1;
	int langd = epost.length()-start;
	string org = epost.substr(start, langd);
	cout << "Person: " << person << endl;
	cout << "Organisation: " << org << endl;
	
	
	return 0;
} */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Skriv ett klock slag: ";
	string klockan;
	cin >> klockan;
	string tim = klockan.substr(0, 2);
	string min = klockan.substr(3, 2);
	cout << "Timme: " << tim << endl;
	cout << "Minute: " << min << endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
