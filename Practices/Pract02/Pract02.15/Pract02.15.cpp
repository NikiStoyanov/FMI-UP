#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;

	if (a < 1000 || a > 9999)
	{
		cout << "Incorrect number!" << endl;
		return 0;
	}

	int firstNumber = (a / 1000) * 10 + a % 10;
	int secondNumber = (a / 100 % 10) * 10 + a / 10 % 10;

	if (firstNumber > secondNumber)
	{
		cout << "more (" << firstNumber << " > " << secondNumber << ")" << endl;
	}
	else if (firstNumber < secondNumber) {
		cout << "less (" << firstNumber << " < " << secondNumber << ")" << endl;
	}
	else {
		cout << "equal (" << firstNumber << " = " << secondNumber << ")" << endl;
	}

	return 0;
}
