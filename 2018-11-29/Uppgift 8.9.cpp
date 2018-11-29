#include <iostream>
using namespace std;
int main()
{
int varde;	
	cout << "Mata in en värde: " << endl;
	cin >> varde; 

int total = 1;

for(int n=1; n <= varde; n++)
{
	if(n!=varde)
	    cout << n << "*";
    else{
	cout << n;
}
	total = total * n;
	
}
	
	cout << "=" << total;
	
	
	
	
	
	
	return 0;
}
