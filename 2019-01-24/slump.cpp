//Slump
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	cout << RAND_MAX << endl;
	cout << time(NULL) << endl;
	
	srand(time(NULL));
	
	cout << rand() << endl;
	
	cout << (rand() % 6)+1 << endl;
	
	return 0;
}
