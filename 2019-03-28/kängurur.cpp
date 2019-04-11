#include <iostream> 
using namespace std;

void antalbarn(int tal, int n);

int main()
{
	
	int antal;
	cout << "Hur många barn har mamman: " << endl;
	cin >> antal;
	
	int barn[antal];
	cout << "Ange Hur mycket första barnet väger: " << endl;
	cin >> barn[0];
	
	antalbarn(barn,antal);

	
	
	
	
	
	
	return 0;
}
void antalbarn(int tal, int n)
{
	int orkarlyfta = 10000;
	
	for(int i = 0; i < n; i++) 
	{
		if(i == 0)
		{
				tal[i+1] = tal[i];
		}
		
		if(i == 1)
		{
		    tal[i+1] = tal[i-1]+ tal[i-1];
	    
	
	    }	
  	    else
  	    {
			tal[i+1] = tal[i-1]+ tal[i-2];
			
			
		}
  	        int total = 0;
}
  	
  	for(int i = 0; i < n; i++)
  	{
		
	total = tal[i] + total;
		
		
	}
  	
  	int totalbarn = orkarlyfta/total;
  	
  	cout << "Mamman orkar lyfta: " << totalbarn << " barn" << endl;
	
}
