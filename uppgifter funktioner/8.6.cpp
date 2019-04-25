#include <iostream>
using namespace std;
void prickar();
int main()
{
	prickar();
	
	return 0;
}
void prickar()
{
	int prickar;
	cout << "Hur många prickar vill du ha?: " << endl;
	cin >> prickar;
	int rader;
	cout << "Hur många rader vill du ha?: " << endl;
	cin >> rader;
	
	for(int j=0; j < rader; j++)
	{
		
	for(int n= 0; n < prickar; n++)
	{
		cout << "*";
	}
	cout << endl;
}
	
}
