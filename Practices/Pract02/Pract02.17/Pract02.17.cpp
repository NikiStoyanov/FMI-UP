#include <iostream>

using namespace std;

int main()
{
	char a, b, c, d;
	cin >> a >> b >> c >> d;

	char e;
	cin >> e;

	bool isInUnion = (e > a && e < b) || (e > a && e < b);

	cout << a << " " << b << endl;

	return 0;
}
