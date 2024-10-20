#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	
	for (int i = 2; i < number / 2; i++)
	{
		if (number % i == 0)
		{
			cout << "Not prime" << endl;
			return 0;
		}
	}

	cout << "Prime" << endl;

	return 0;
}
