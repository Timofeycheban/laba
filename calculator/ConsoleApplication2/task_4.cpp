#include <iostream>
using namespace std;

int main()
{
	int n, b;
	bool f = false;
	cin >> n;
	while (n > 0) {
		b = n % 10;
		if (b == 2) {
			f = true;
			break;
		}
		n /= 10;
	}
	cout << boolalpha << f << endl;
}