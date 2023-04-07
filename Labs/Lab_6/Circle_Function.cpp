// Lab 6 Jase Kochhar
// The following program finds the area and circumference of a circle using the radius.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace::std;

double find_cc(int rad);
double find_area(int rad);

double const PI = 3.1415926535987;

int main()
{
	double rad, cc, area;

	cout << fixed << setprecision(2);

	cout << "Enter Radius: ";
	cin >> rad;
	
	cc = find_cc(rad); 
	area = find_area(rad);

	cout << "Circumference is: " << cc << endl;  
	cout << "Area is: " << area << endl; 

	return 0;
}


double find_cc(int rad)


{
	double cc;
	 
	cc = 2 * PI * rad;

	return cc; 

}
double find_area(int rad)


{
	double area;

	area = PI * (pow(rad, 2)); 

	return area; 

}