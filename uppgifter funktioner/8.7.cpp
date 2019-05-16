#include <iostream>
using namespace std;
void meny();
void a (int &a);
void b (int &a);
void c (int &a);
void d (int &a);

int main()
{
	meny();
	
	return 0;
}
void meny()
{
	int passagerare = 0;
	
	do{
			int val;
			cout << "1. Nollställ antalet passagerare." << endl << "2. Öka antalet passagerare med en." << endl << "3. Minska antalet passagerare med en." << endl << "4. Skriv ut antalet passagerare." << endl;
			cin >> val;
			cout << endl;
			
				switch (val)
				{
				case 1:
				a(passagerare);
				break;
				
				case 2:
				b(passagerare);
				break;
				
				case 3:
				c(passagerare);
				break;
				
				case 4:
				d(passagerare);
				break;
				default:
				cout << "felinmatning!";
				return;
				}
	
	}while(true);
	
}

void a (int &a)
{
	a = 0;

}

void b (int &a)
{
	 a++;
	 
}

void c (int &a)
{
     a--;
    
}

void d (int &a)
{
	cout << a << endl;
	cout << endl;
}
