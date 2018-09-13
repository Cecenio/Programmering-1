#include <iostream>
using namespace std;
int main()
{
	//variabeldeklaration
	//vi alokerar (bokar)
	//plats i datorns minne
	
	unsigned int tal;
	
	//tal = 2;
	//cout << tal << endl;
	//tal få ett värde
	
    //cout << "Storlek på short " << sizeof(short) << endl;
    //cout << "storlek på int " << sizeof(int) << endl;
	//cout << "storlek på long int " << sizeof(long int) << endl;
	//se sidan 327
	//cout << "Storlek på char " << sizeof(char) << endl;
	
	char tecken2 = 66; // kan bara deklareras EN gång
	tecken2 = 65; //Men du kan ge variablen ett nytt värde
	
	char tecken = 'B';
	
	//cout << tecken << endl;
	//cout << tecken2 << endl;
	
	//Men, du kan deklarera en KONSTANT också
	
	const float PI = 3.1415; //Går inte att ändra
	//Flyttal s variabler (decimaltal)
	
	cout << "Storlek på float " << sizeof(float) << endl;
	cout << "Storlek på double " << sizeof(double) << endl;
	cout << "Storlek på long double " << sizeof(long double) <<endl; 
	cout << "Storlek på bool " << sizeof(bool) << endl;
	
	int t = 4.96;
	cout << t << endl; // 4 klipper av deciamldelen
	int a = 4;
	int b = 3;
	// delat med
	int heltalskvot = a/b;
	cout << "Heltalskvot " << heltalskvot << endl;
	float flyttalskvot = a/(float)b;
	cout << "Flyttalskvot  " << flyttalskvot << endl;
	
    return 0;	
}
 
