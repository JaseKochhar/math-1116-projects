// Lab 6 Jase Kochhar
// The following program inputs radius and height of cylinder, and outputs the volume.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;  

double find_vol(int rad, int het); 

double const PI = 3.1415926535987;

int main()
{
	int rad, het; 
		double vol;

	cout << fixed << setprecision(2);

	cout << "Enter Radius: ";
	cin >> rad;
	cout << "Enter Height: ";
	cin >> het;

	vol = find_vol(rad, het); 

	cout << "Volume is: " << vol << endl;


	return 0;
}
 double find_vol(int rad, int het) 
{
	double vol; 


	vol = (PI * het * pow(rad, 2));
	return vol;

}