//This program computes conversion from imperial measurements to metric measurements 

//Name: Jase Kochhar

#include <iostream>;
using std::cout;
using std::cin;
using std::endl; 
using std::fixed; 

#include <iomanip>;
using std::setprecision;

// Declaration

int main ()
{
	// Declaration

	int inches, ounces, pints, fahrenheit;
	double centimeters, grams, litres, celcius; 


	//Input for inches

	cout << "Input value for inches: ";
	cin >> inches;
	centimeters = inches * 2.54;
	cout << "The value in centimeters is: " << centimeters << endl << endl;
	cout << fixed << setprecision(2);

	//Input for ounces

	cout << "Input value for ounces: ";
	cin >> ounces;
	grams = ounces * 28.00;
	cout << "The value in grams is: " << grams << endl << endl;
	cout << fixed << setprecision(2);

	//Input for pints

	cout << "Input value for pints: ";
	cin >> pints;
	litres = pints * 0.57;
	cout << "The value in litres is: " << litres << endl << endl;
	cout << fixed << setprecision(2);

	//Input for ounces

	cout << "Input value for fahrenheit: ";
	cin >> fahrenheit;
	celcius = (fahrenheit-32) * (5.0/9);
	cout << "The value in celcius is: " << celcius << endl << endl;
	cout << fixed << setprecision(2);

		return 0; 
}
