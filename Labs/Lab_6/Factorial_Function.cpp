// Lab 6 Jase Kochhar
// The following program finds the factorial of an integer using a pass by value function.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace::std;

int find_fact(int num);


int main()
{
	int num, fact; 


	cout << "Enter Number: ";
	cin >> num;
	
	fact = find_fact(num); 

	cout << "Factorial is: " << fact << endl;

	return 0;
}


int find_fact(int num)


{
	int fact, count; 

	if (num < 0)
	{
		cout << "Number must be positive." << endl;
	}
	else if (num == 0)
	{
		fact = 1;
		cout << "Factorial is: " << fact << endl;

	}
	else if (num > 0)
	{
		fact = 1;
		int count = 1;
		while (count <= num)
		{
			fact *= count;
			count++;

		}

		
	}
	
	return fact; 

}