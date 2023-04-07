

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double const PI = 3.14159; 

int main()
{ 

	double radian;

	cout << setw(10) << "Degrees" << setw(10) << "sin"
		<< setw(10) << "cos" << endl;

	for (int deg = 10; deg <= 30; deg++)
	{
		radian = (deg * PI) / 180;
		cout << setw(10) << deg << setprecision(2) << setw(10) << sin(radian)
			<< setw(10) << cos(radian) << endl;
	}
	return 0;
}