#include <iostream>
using namespace std;
int main()
{
	int falt[100];
	int antal;
	int tal;
	cout << "Hur många tal vill du ha, högst 100: " << endl; 
	cin >> antal;
	
	for(int i=0; i<antal; i++)
	{
	cin >> tal;
	
		if(tal<0)
		     break;
		     
		 falt[i] = tal;    
		     
    }
	
	
	

	return 0;
}
