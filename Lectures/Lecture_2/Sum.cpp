// The following program inputs two integers 
// and it calculates and outputs the sum. 
//Name: Jase

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Declaration Section
	int n1, n2, sum;

	//Input section
	cout << "Enter First Integer: ";
	cin >> n1;
	cout << "Enter Second Integer: ";
	cin >> n2;

	// Computation Section

	sum = n1 + n2;

	//Output Section
	cout << "The Sum is: " << sum << endl;



	return 0;
}