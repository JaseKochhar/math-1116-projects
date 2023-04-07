//The following program inputs radius of a circle
// It calls a function to find and return the area and circumference.

//The program uses a pass-by-reference function to return more than one result. 
// A pass-by-reference function does not have a return statement. It is a void function.

#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

const double PI = 3.1415926535987;

//Function Prototype
void calculate(double rad, double&circ, double&area);

int main()
{
	double rad;
	double circ, area;

	cout << "Enter radius: ";
	cin >> rad; 
	calculate(rad, circ, area);  
	cout << "Circumference is: " << circ << endl; 
	cout << "Area is: " << area << endl;

	return 0;
}
//Function Definition 
void calculate(double rad, double& circ, double& area)
{
	area = PI * rad * rad;
	circ = 2 * PI * rad;
}
