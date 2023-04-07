

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
	
	const int arraysize = 100;
	int list[arraysize];
	int size;
	int sum; 

	cout << "Enter size of the list: ";
	cin >> size; 


	for (int i = 0; i < size; i++)
	{
		list[i] = 0;

	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element of list: ";
		cin >> list[i];


	}

	cout << endl << "List: " << endl;
	
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;


	}


	sum = 0;
	for (int i=0; i < size; i++)
	{
		sum = sum + list[i]; 
	}

	cout << endl << "Sum is: "  << sum << endl;

	return 0;
}
