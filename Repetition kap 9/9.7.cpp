#include <iostream>
using namespace std;

bool primtal(int a);

int main()
{
	int tal;
	cout << "Skriv ditt tal: " << endl;
	cin >> tal;
	
	cout << primtal(tal);
	return 0;
}


bool primtal(int a)
{
	
	
	
      switch(a)
	    {
		case 1:
		return false;

		case 2:
		return true;
		
	    }
	    
		for(int n = 3; n < (a-1); n++)
		{
		int primtal = a%n;
		
		if(primtal == 0) return false;
		
		}
			    

return true;
}

