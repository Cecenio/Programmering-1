#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
  
   //int min = 7;
   //int max = 18;
   //int num = (min + (rand() % (int)(max - min + 1)));
   
   cout << RAND_MAX;
   for (int n = 0; n < 10; n++)
       cout << (rand() % 6)+1 << endl;

   // cout << num << endl;
	
	
	
	return 0;
}
