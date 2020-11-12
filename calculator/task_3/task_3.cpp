#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float sum = 1.1;
	float add = 0.1;
	float res = sum;

	for (int i = 1; i < n; i++) {
		sum = (sum + add) * -1;
		add = add * -1;
		res += sum;
	}

	cout << endl << res;

	return 0;
}
