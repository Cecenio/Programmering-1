#include <iostream>
using namespace std;

void hittastor(int tal[], int n);

int main()
{
	int antal = 100;
	cout << "Hur många värden vill du skriva in (max 100): " << endl;
	cin >> antal;
	
	int heltal[antal];
	cout << "Ange värden: " << endl;
	
	
	for( int i = 0; i < antal; i++)
	{
		cin >> heltal[i];
    }
	
	hittastor(heltal, antal);
	
	
	
	
	return 0;
}
void hittastor(int tal[], int n)
{
	int max = tal[0];
	
	for(int i = 0; i < n; i++)
	{
	
	if(max < tal[i])
	{
		max = tal[i];
	}
	
	
    }
	
	cout << "Det största värdet är: " << max << endl;
}
