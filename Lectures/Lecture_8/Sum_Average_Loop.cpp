// This program inputs a list of integers of known size and calculates then outputs the sum. 
// The program uses a counter-controlled while loop.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fixed; 

#include <iomanip>

using std::setprecision; 

int main()

{
	int size, count, num; 

	double sum, average; 

	cout << fixed << setprecision(2); 

	cout << "Enter size of list: ";
	cin >> size;  
	
	sum = 0;
	count = 1;
	while (count <= size)
	{


		cout << "Enter number: "; 
		cin >> num;

		sum += num;

		count++;


	}
	cout << endl << "Sum is: " << sum << endl; 
	
	if (size > 0)
	{
		average = sum / size;
		cout << "Average is : " << average << endl << endl;

	}
	else
	{
		cout << "Cannot divide by zero.";


	}
	
	






	return 0; 
}