//The following program finds x to the power n


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int x, n, answer;

	answer = 1;

	cout << "Enter x: ";
	cin >> x;
	cout << "Enter n: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		answer *= x;

	}
	cout << "The Power is: " << answer << endl; 



	return 0;
}