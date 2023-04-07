//The following program inputs two integers
// It calls a function to find and return the sum.
//It calls another function to find and return the product.

//The program uses TWO pass-by-functions. These functions can only return ONE result each. 
//Two results means you have to create a seperate function for each task.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

//Function Prototype
int find_sum(int x, int y);
int find_prod(int a, int b);

int main()
{
	int x, y;
	int a, b;
	int sum, prod;

	cout << "Enter two integers to add: ";
	cin >> x >> y;
	sum = find_sum(x, y);
	cout << "Sum is: " << sum << endl;

	cout << "Enter two integers to multiply: ";
	cin >> a >> b;
	prod = find_prod(a, b);
	cout << "Product is: " << prod << endl;

	return 0; 
}
//Function Definition for Find Sum
int find_sum(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}
//Function Definition for Find Prod
int find_prod(int a, int b)
{
	int prod;
	prod = a * b;
	return prod;
}