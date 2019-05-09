#include <iostream> 
using namespace std;

void ritaLinje(int langd);

int main()
{
	int langd;
	cout << "Hur lång ska din linje vara: " << endl;
	cin >> langd;
	cout << endl;
	ritaLinje(langd);
	
	
	
	return 0;
}
void ritaLinje(int langd)
{
	
	for(int n = 0; n < langd; n++)
	{
		
		cout << "*";
		
	}
	
}
