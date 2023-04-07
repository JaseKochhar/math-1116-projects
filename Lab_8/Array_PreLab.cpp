// The following program sorts an array from smallest to largest, and searches it for a key.
// It also finds the sum and average of the array, finds the smallest and largest number, outputs the array in reverse, and multiplies the array by a multiplier 
// All of these ouputs are done using functions
// Name : Jase Kochhar 
// Lab 7


#include <iostream>
#include <iomanip>
#include <cmath>
#include "Array_PreLab.h"

using namespace std;  

int main()
{
	int size;
	cout << endl << "Enter Size of List: ";
	cin >> size;
    if (!check_size(size)) {
        cout << "invalid array size of " << size << " given" << endl;
        return -1;
    }
	int list[size];
	int key, hold, small, large; 
	int	mult = 1; 
	int sum = 0;

	//Initialize Each Value in the Array

	init_array(list, size);

	//Output the Elements of the Array

	cout << endl << "Initialized Array" << endl;

	output_array(list, size);

	//Input Each Element of the Array

	input_array(list, size);

	//Output Array

	cout << endl << "Array: " << endl; 

	output_array(list, size);

	// Bubble Sort
	//Sort the Data From Smallest to Largest

	for (int pass = 0; pass < size - 1; pass++)
	{

		for (int i = 0; i < size - 1; i++)
		{
			if (list[i] > list[i + 1])
			{
				//Swap Elements
				hold = list[i];
				list[i] = list[i + 1];
				list[i + 1] = hold;

			}
		}
	}

	cout << "Sorted Array: ";

	for (int i = 0; i < size; i++)
	{
		cout << endl << list[i];
	}

	//Input Key

	cout << endl << endl << "Enter Key: ";
	cin >> key;
	

	//Assume Key is not in the List

	int pos = -1;

	for (int i = 0; i < size; i++)
	{
		if (list[i] == key)
			pos = i;
	}

	if (pos == -1)
		cout << key << " is Not Found in the Array";
	else
		cout << key << " is Found at Position " << pos << "." << endl;


	//Calculate and Output Sum of the Array

	sum = sum_array(list, size);

	cout << endl << endl << "Sum is: " << sum << endl;

	//Calculate and Ouput the Average

	double ave;

	cout << fixed << setprecision(2);

	ave = static_cast<double>(sum) / size;

	cout << "The Average is: " << ave << endl << endl;

	// Find and Output the Smallest Element in the Array

	small = find_small(list, size);

	cout << "The Smallest Element is: " << small << endl;

	// Find and Output the Largest Element in the Array

	large = find_large(list, size);

	cout << "The Largest Element is: " << large << endl;

	//Output the Array in Reverse

	cout << endl << "Reverse Array: " << endl;

	rev_array(list, size);

	cout << endl;

	//Multiply each Element by a Multiplier
	
	cout << "Enter Multiplier: ";
	cin >> mult;  

	mult_array(list, size, mult);

	cout << endl << endl; 

	return 0;
}
