#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "two varrible" << endl;
	cin >> a >> b;
	while (true)
	{
		if (a % b == 0)
		{
			cout << "NOD = " << b<< endl;
			break;
		}
		else
		{
			b = a % b;
		}
		
	}
}