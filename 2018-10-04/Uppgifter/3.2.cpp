#include <iostream>
using namespace std;
int main()
{
	cout << "Mata in fyra heltal: " << endl;
	
	int tal[4];
	cin >> tal[0];
	
	cin >> tal[1];
	
	cin >> tal[2];
	
	cin >> tal[3];
	
	cout << "In matade tal: " << tal[0] << ' ' << tal[1] << ' ' << tal[2] << ' ' << tal[3] << endl;
	
	int tmp;
	
	tmp = tal[0];
	tal[0] = tal[3];
	tal[3] = tmp;
	
	tmp = tal[1];
	tal[1] = tal[2];
	tal[2] = tmp;
	
	cout << "Omvänd ordning: " << tal[0] << ' ' << tal[1] << ' ' << tal[2] << ' ' << tal[3] << endl;
	
	return 0;
}
