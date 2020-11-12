#include <iostream>

using namespace std;

int main()
{
	int a, b, n;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {

		n = i;
		cout << "--> " << n << endl;

		while (n != 1) {
			if (n % 2 == 0)
				n = n / 2;
			else
				n = (n * 3 + 1) / 2;
			cout << "" << n << endl;
		}
	}

	return 0;
}