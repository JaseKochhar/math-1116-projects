//The following program inputs three integers
//And computes and outputs the product
//Name: Jase Kochhar

#include <iostream>
using std::cout; //Function to output
using std::cin; //Function to input
using std::endl; //Function to move cursor down a line

int main()
{
	//Declaration
	int a, b, c, d, product;

	//Input 
	cout << "Enter Four Integers: ";
	cin >> a >> b >> c >> d;
	cout << endl; 

	//Computation 
		product = a * b * c * d ;

	//Output
		cout << "The Product is: " << product << endl;



	return 0;
}