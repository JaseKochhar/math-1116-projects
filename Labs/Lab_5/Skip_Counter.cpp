// Lab 5 Jase Kochhar

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{

	const int sent = 999;

	int n1, n2, inc;
	
	cout << "This Program computes the sum of all integers \n";
	cout << "between two input integers with skip-counting \n \n";


	do 
	{
		cout << "Enter First Number: ";
		cin >> n1;
		cout << "Enter Second Number: ";
		cin >> n2;
		cout << "Enter Increment: ";
		cin >> inc;  

		if (n2 < n1 + inc)
		{
			cout << "Sorry, the difference between the beginning number" << endl;
			cout << "and the ending number is not large enough" << endl;
			cout << "Please try again.\n\n"; 

		}
	} while (n2 < n1 + inc);

	int sum = 0;
	for (int I = n1; I <= n2; I += inc)
	{
		cout << I << " ";

		sum += I;
		
	}

	cout << endl << "The sum of these integers is: " << sum << endl; 
	
	return 0;
}