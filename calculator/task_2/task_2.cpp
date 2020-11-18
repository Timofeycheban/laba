#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n, v;
	float leg, hup, hght, s;

	cin >> n >> v;

	switch (n) {

	 case 1:

		leg = v;
		hup = sqrt(leg * leg * 2);
		hght = hup / 2;
		s = hup * hght / 2;
		break;

	 case 2:

		hup = v;
		hght = hup / 2;
		s = hup * hght / 2;
		leg = sqrt((hup / 2) * (hup / 2) + hght * hght);
		break;

	 case 3:

		hght = v;
		hup = hght * 2;
		s = hup * hght / 2;
		leg = sqrt((hup / 2) * (hup / 2) + hght * hght);
		break;

	 case 4:

		s = v;
		hup = sqrt(s * 4);
		hght = hup / 2;
		leg = sqrt((hup / 2) * (hup / 2) + hght * hght);
		break;

	}

		cout << setprecision(2);
		cout << "Leg  " << leg << " cm" << endl;
		cout << "Hupotenuse  " << hup << " cm" << endl;
		cout << "Height  " << hght << " cm" << endl;
		cout << "Square  " << s << " cm" << endl;

	return 0;
}