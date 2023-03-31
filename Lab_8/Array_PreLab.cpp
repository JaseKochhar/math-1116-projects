// The following program sorts an array from smallest to largest, and searches it for a key.
// It also finds the sum and average of the array, finds the smallest and largest number, outputs the array in reverse, and multiplies the array by a multiplier 
// All of these ouputs are done using functions
// Name : Jase Kochhar 
// Lab 7


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;  

// Function Prototypes

void init_array(int list[] , int size);

void input_array(int list[], int size);

void output_array(int list[], int size);

int sum_array(int list[], int size);

int find_small(int list[], int size);

int find_large(int list[], int size);

void rev_array(int list[], int size);

void mult_array(int list[], int size, int mult); 

int main()
{
	const int arraySize = 100;
	int list[arraySize];
	int size, key, hold, small, large; 
	int	mult = 1; 
	int sum = 0;

	cout << "Enter Size of List: ";
	cin >> size;

	// Function Calls

	// init_array(list, size);

	// input_array(list, size);

	// output_array(list, size);

	// sum_array(list, size);

	// find_small(list, size);

	// find_large(list, size);

	// rev_array(list, size);

	// mult_array(list, size, mult);

	//Initialize Each Value in the Array

	init_array(list, size);

	//Output the Elements of the Array

	cout << endl << "Initialized Array" << endl;

	output_array(list, size);

	//Input Each Element of the Array

	input_array(list, size);

	//Output Array

	cout << endl << "Array: ";

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

	cout << endl << "Sorted Array: ";

	for (int i = 0; i < size; i++)
	{
		cout << endl << list[i];
	}

	//Input Key

	cout << endl << endl << "Enter Key: ";
	cin >> key;
	cout << endl;

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

	cout << endl << "Sum is: " << sum << endl;

	//Calculate and Ouput the Average

	double ave;

	cout << fixed << setprecision(2);

	ave = static_cast<double>(sum) / size;

	cout << endl << "The Average is: " << ave << endl;

	// Find and Output the Smallest Element in the Array

	small = find_small(list, size);

	cout << "The Smallest Element is: " << small << endl;

	// Find and Output the Largest Element in the Array

	large = find_large(list, size);

	cout << "The Largest Element is: " << large << endl;

	//Output the Array in Reverse

	rev_array(list, size);

	cout << endl << "Reverse Array: " << endl;

	cout << endl;

	//Multiply each Element by a Multiplier


	cout << "Enter Multiplier: ";
	cin >> mult;  

	mult_array(list, size, mult);

	return 0;
}

	// Function Definitions

void init_array(int list[], int size)
{ 
	for (int i = 0; i < size; i++)
		list[i] = 0;  
}

void input_array(int list[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Element: ";
		cin >> list[i];
	}

} 

void output_array(int list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
	cout << endl;
}

int sum_array(int list[], int size)
{
	int sum = 0; 

	for (int i = 0; i < size; i++)
	{
		sum += list[i];
	}

	return sum;
}

int find_small(int list[], int size)
{
	//Assume the Smallest is the First Element in the Array

	int small;

	small = list[0];

	for (int i = 1; i < size; i++)
	{
		if (list[i] < small)
			small = list[i];
	}
	return small; 
}

int find_large(int list[], int size)
{
	//Assume the largest is the Last Element in the Array

	int large;

	large = list[0];

	for (int i = 1; i < size; i++)
	{
		if (list[i] > large)
			large = list[i];
	}
	return large; 
}

void rev_array(int list[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << list[i] << endl;
	}
}

void mult_array(int list[], int size, int mult) 
{


	cout << "Enter Multiplier: ";
	cin >> mult;

	for (int i = 1; i < size; i++)
	{
		list[i] *= mult;
	}

	cout << endl << "Array: ";

	for (int i = 0; i < size; i++)
	{
		cout << endl << list[i]; 
	}

}

