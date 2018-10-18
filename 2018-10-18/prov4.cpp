// Caesar Brag Te2B
#include <iostream>
using namespace std;
int main()
{
	cout << "Mata in timmar, minuter och sekunder. Använd heltal" << endl;
	
	int tim1;
	cin >> tim1;
	
	int min1;
	cin >> min1;
	
	int sek1;
	cin >> sek1;
	
	cout << "Timmar: " << endl;
	cout << tim1 << endl;
	
	cout << "Minuter: " << endl;
	cout << min1 << endl;
	
	cout << "Sekunder: " << endl;
	cout << sek1 << endl;
	
	
	int totalsek = (tim1*3600) + (min1*60) + sek1;
	
	int tim2 = totalsek / 3600;
	
	int min2 = (totalsek/60)%60;
	
	int sek2 = totalsek % 60;
	
	
	cout << "Den inmatade tiden motsvaras av " << tim2 << " timmar, " << min2 << " minuter och " << sek2 << " sekunder" << endl;
	
	
	return 0;
}
