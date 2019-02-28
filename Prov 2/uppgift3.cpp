// Caesar Brag, uppgift 3
#include <iostream>
using namespace std;
int main()
{
	int antal;
	cout << "Hur många heltal vill du mata in? (4 till 100)" << endl;
	
	cin >> antal;
	
	int heltal[100];
	
	for (int n = 0; antal > n; n++)
	{
		cout << "Mata in tal " << n+1 << ":" << endl;
		cin >> heltal[n];
		
	}
	
	int max = heltal[0];
	for (int n=0; n < antal; n++)
	{
		if (max < heltal[n] ) max = heltal[n];
	}
	
	cout << "Det största av de inmatade heltalen är " << max << endl;
	
	
	
	
	
	
	
	return 0;
}
