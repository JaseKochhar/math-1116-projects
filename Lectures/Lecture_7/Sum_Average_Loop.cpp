// The following program uses a counter-controlled while loop.
// The program inputs a list of integers of known size, then calculates and ouputs the sum.
// It also calculates and outputs the average (Including an error check).
// The program outputs all results to two decimals after the decimal.

#include <iostream>;
using std::cout;
using std::cin;
using std::endl;
using std::fixed;


#include <iomanip>;
using std::setprecision;; 


int main()
{
	int size, num, counter;
	double average, sum;
	cout << fixed << setprecision(2); 


	cout << "Input size of the list: "; 
	cin >> size; 


	if (size >= 0)
	{
		sum = 0;
		counter = 1;
		while (counter <= size)

		{
			cout << "Enter Integer #" << counter << ": ";
			cin >> num;
			sum = sum + num;

			counter = counter + 1;
		}

		if (size != 0)
		{
			cout << "Sum: " << sum << endl;
			average = sum / size;
			cout << "Average: " << average << endl;
		}
		else
			cout << "Cannot divide by 0.";
	}
	else
		cout << "Size must be >= 0";



		return 0; 
}