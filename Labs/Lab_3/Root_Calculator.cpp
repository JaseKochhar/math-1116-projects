// Name: Jase Kochhar. ID: 0272738 Lab 3
//The following program inputs coefficient doubles a, b and c 
//and calculates and outputs the roots uing the quadratic equation.

#include <iostream>; 
using std::cout; 
using std::cin;
using std::endl;
using std::fixed; 

#include <iomanip>;
using std::setprecision; 

int main()
{
	int testcase, counter;
	double a, b, c, disc, root1, root2, root; 
	cout << fixed << setprecision(2); 

	cout << "Enter number of test cases: ";
	cin >> testcase;
	cout << endl;  

	counter = 1;

	while (counter <= testcase) 
	{
		cout << "Input coefficients for a, b and c: "; 
		cin >> a >> b >> c; 

		disc = (b * b) - 4 * a * c;

			if (disc > 0)
			{
				root1 = (-b + sqrt(disc)) / (2 * a);
				root2 = (-b - sqrt(disc)) / (2 * a); 

				cout << "Root 1: " << root1 << endl;
				cout << "Root 2: " << root2 << endl << endl;  

			}
			 else if (disc == 0)
			{
				root = (-b / (2 * a));  
				cout << "Root: " << root << endl << endl; 

			}
			 else
			{
				cout << "There are no roots." << endl; 


			}

			counter = counter + 1; 
	}

	

	return 0;
}