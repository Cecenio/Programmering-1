#include <iostream>
using namespace std;
int main()
{
	//double langd;
	//cout << "Hur långt blev slaget? ";
	//cin >> langd;
	//if (langd < 150 || langd > 190)
	//{
	//	cout << "Grattis. Du lyckades.";
	//}
	//else
	//{
	//	cout << "Det var ingen höjdare.";
	//}
	
	double alder;
	cout << "Ange ålder: ";
	cin >> alder;
	if (alder <= 15 || alder >= 65)
	{
		cout << "Det kostar 5kr.";
	}
	else 
	{
		cout << "Det kostar 10kr.";
	}
	
	
	
	
	
	return 0;
}
