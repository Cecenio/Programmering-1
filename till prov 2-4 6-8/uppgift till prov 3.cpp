#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	for (int x=0; x<10; x++)
	{
		
		
			for (int y=0; y<10; y++)
			{
				
						for (int z=0; z<10; z++)
						{
							
							
							
							if ( (x*100+y*10+z) == (pow(x,3)+pow(y,3)+pow(z,3)) )
									cout << x << y  << z << " == "<< x <<"^3 + " << y <<"^3 + " << z <<"^3" << endl;		
							
						}

			}
		
	}
	
	
	return 0;
}
