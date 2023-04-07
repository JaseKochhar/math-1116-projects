//This program computes volume of a cylinder

#include <iostream>;
using std::cout; 
using std::endl;
using std::cin;
using std::fixed;

#include <iomanip>;
using std::setprecision;

int main()
{
	//Declaration
	int radius, height;
	double volume;
	const double PI = 3.14159265;

	//Input
	cout << "Enter the radius: ";
	cin >> radius;
	cout << "Enter the height: ";
	cin >> height; 
	volume = (radius * radius * PI * height);
	cout << fixed << setprecision(2);
	cout << "The volume is : " << volume;
	
	return 0; 
}