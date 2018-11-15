#include <iostream>
using namespace std;
int main()
{
	//double vikt, porto;
	//cout << "Mata in brevets vikt: ";
	//cin >> vikt;
	//if (vikt <= 20)
	//{
	//	porto = 5;
	//}
	//else if (vikt <= 100)
	//{
	//	porto = 10;
	//}
	//else 
	//{
	//	porto = 20;
	//}
	//cout << "Ett brev som väger " << vikt << " gram kostar " << porto << " kronor.";
	
	double skivor, pris;
	cout << "Hur många skivor vill du köpa? ";
	cin >> skivor;
	if (skivor <= 10)
	{
		pris = 9.9 * skivor;
	}
	
	else if (skivor > 10 && skivor <= 50) 
	{
		pris = (9.9 * skivor) * 0.95;
	}
	
	else if (skivor > 50 && skivor <= 100)
	{
		pris = (9.9 * skivor) * 0.9;
	}
	
	else  if(skivor > 100)
	{
		pris = (9.9 * skivor) * 0.85;
	}
	
	cout << "Det kommer kosta " << pris << " kronor.";
	
	
	return 0;
}
