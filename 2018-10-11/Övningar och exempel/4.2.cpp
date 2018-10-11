#include <iostream>
using namespace std;
int main()
{
	//int tid = 800;
	//int min = tid/60;
	//int sek = tid%60;
	//cout << tid << " S = " << min << " min och " << sek << " s" << endl;
	
	

	
	int tal1;
	cout << "Skriv ett antal månader: " << endl;
	cin >> tal1;
	cout << "År: " << tal1/12 << endl;
	cout << "Månader: " << tal1%12 << endl;
	
	
	
	
	return 0;
}
