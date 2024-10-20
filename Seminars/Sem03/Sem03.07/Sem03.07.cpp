#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

    int count = 0;
    while (number % 2 == 0) {
        count++;
        number /= 2;
    }
    if (count > 0) {
        cout << "2^" << count << " ";
    }

    for (int i = 3; i * i <= number; i += 2) {
        count = 0;
        while (number % i == 0) {
            count++;
            number /= i;
        }
        if (count > 0) {
            cout << i << "^" << count << " ";
        }
    }

    if (number > 2) {
        cout << number << "^1 ";
    }
    cout << endl;

	return 0;
}
