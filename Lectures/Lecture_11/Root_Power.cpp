
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double result, num; 
	int x, n, answer;
	
	cout << "Enter Number: ";
	cin >> num;

	result = sqrt(num);

	cout << "Square Root is: " << result << endl; 

	cout << "Enter x: ";
	cin >> x;
	cout << "Enter n: ";
	cin >> n;
	answer = pow(x, n);
 
	cout << "The power is: " << answer << endl << endl; 




	return 0;
}