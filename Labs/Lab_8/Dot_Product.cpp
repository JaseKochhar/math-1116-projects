//The following program computes the dot product of two lists
//Name: Jase Kochhar  
// Lab 8


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int arraySize1 = 100;
	int list1[arraySize1]; 
	int size1;

	const int arraySize2 = 100;
	int list2[arraySize2];
	int size2;

	int dotprod;

	cout << "Enter Size of First List: ";
	cin >> size1;

	//Initialize Each Value in the First Array

	for (int i = 0; i < size1; i++)
	{
		list1[i] = 0;

	}

	//Output the Elements of the First Array

	cout << endl << "Initialized First Array" << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << list1[i] << endl;
	}
	cout << endl;

	//Input Each Element of the First Array

	for (int i = 0; i < size1; i++)
	{
		cout << "Enter Element: ";
		cin >> list1[i];
	}

	//Output First Array

	cout << endl << "First Array: "; 

	for (int i = 0; i < size1; i++)
	{
		cout << endl << list1[i];
	}

	cout << endl << "Enter Size of Second List: ";
	cin >> size2;

	cout << endl; 

	//Initialize Each Value in the Second Array

	for (int i = 0; i < size2; i++)
	{
		list2[i] = 0;

	}

	//Output the Elements of the Second Array

	cout << endl << "Initialized Second Array" << endl;
	for (int i = 0; i < size2; i++)
	{
		cout << list2[i] << endl;
	}
	cout << endl;

	//Input Each Element of the Second Array

	for (int i = 0; i < size2; i++)
	{
		cout << "Enter Element: ";
		cin >> list2[i];
	}

	//Output Second Array

	cout << endl << "Second Array: ";

	for (int i = 0; i < size2; i++)
	{
		cout << endl << list2[i];
	}

	cout << endl; 
	

	//Dot Product

	int term = 0;
	int sum = 0;

		for (int i = 0; i < size2; i++)
		{
			term = list1[i] * list2[i]; 

			sum += term;

			dotprod = sum;
		}

		cout << endl << "Dot Product: " << dotprod;

	return 0;
}


