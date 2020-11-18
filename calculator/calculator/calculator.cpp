#include <iostream>

using namespace std;

int main()
{
	int a, b, r;
	char q;
	cout << "enter the first number: " << endl;
	cin >> a;
	cout << "enter the second number: " << endl;
	cin >> b;
	cout << "action: ";
	cin >> q;

	switch (q) {

	case '+':
		r = a + b;
		cout << "Result: " << r << endl;
		break;

	case '-':
		r = a - b;
		cout << "Result: " << r << endl;
		break;

	case '*':
		r = a * b;
		cout << "Result: " << r << endl;
		break;

	case '/':
		r = a / b;
		cout << "Result: " << r << endl;
		break;

	case '%':
		r = a % b;
		cout << "Result: " << r << endl;
		break;

	default:    cout << "incorrect value." << endl;

	}


	return 0;
}