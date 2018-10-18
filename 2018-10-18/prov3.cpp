// Caesar Brag Te2B Uppgift 3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Mata in en text: " << endl;
	string text;
	getline(cin, text);
	
	
	string tecken;
	
	cout << "Mata in tecken att leta efter: " << tecken << endl;
	
	cin >> tecken;

	
    int pos = text.find(tecken, 0);
    
    int start = pos + 2;
    
    int langd = tecken.length();

	string ordet = text.substr(start, langd);
	
	cout << ordet << " plockas ut!" << endl;
	

	
	
	
	
	
	
	
	return 0;
}
