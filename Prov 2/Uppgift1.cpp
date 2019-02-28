// Caesar Brag, uppgift 1
#include <iostream>
using namespace std;
int main()
{
	int min; 
	cout << "Mata in antalet minuter: " << endl;
	cin >> min;
	
	int timmar;
	int min2;
	
	if (min >=60)
	{
		timmar = min/60;
		min2= min%60;
		
	}
	else
	{
		min2= min;
		timmar = 0;
		
		
	}
	
	cout << min << " minuter motsvaras av " << timmar << " timmar och " << min2 << " minuter" << endl;
	
	
	return 0;
}
