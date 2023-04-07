// The following Program calculates x^n
//It uses a counter-controlled while loop.
//It will loop n times and multiply by x each time.
//It inputs x and n (positive integers)

#include <iostream>;
using std::cout;
using std::cin;
using std::endl;
using std::fixed;


#include <iomanip>;
using std::setprecision;;


int main()
{
	int x, n, counter, result ; 

	cout << "Enter x and n: ";
	cin >> x >> n;

	result = 1;

	counter = 1;
	while (counter <= n)
	{
		result = result * x;
		counter = counter + 1;

	}
	cout << "The result is: " << result << endl << endl;

	int num, count, factorial;
	cout << "Enter an Integer: ";
	cin >> num;
	factorial = 1;
	count = 1;
	while (count <= num)
	{
		factorial = factorial * count;
		count = count + 1;

	}
	cout << "Factorial: " << factorial << endl;


	return 0; 
}