

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


//Function Prototype
void calculate(int, double, double &, double &);

int main()
{
	double sum, b, prod;
	int a;

	cout << "Enter integer a: ";
	cin >> a;
	cout << "Enter double b: ";
	cin >> b;

	calculate(a, b, sum, prod);

	cout << "Sum is: " << sum << endl;
	cout << "Product is: " << prod << endl; 

	return 0;
}
//Function Defintion
void calculate(int a, double b, double& sum, double& prod)
{
	
	sum = a + b;  

	prod = a * b;

}