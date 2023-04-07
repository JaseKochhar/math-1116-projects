// Array_PreLab.h

#ifndef ARRAY_FUNCTIONS
#define ARRAY_FUNCTIONS

#include <iostream>

using namespace std;

// Function Prototypes
bool check_size(int size);

void init_array(int list[] , int size);

void input_array(int list[], int size);

void output_array(int list[], int size);

int sum_array(int list[], int size);

int find_small(int list[], int size);

int find_large(int list[], int size);

void rev_array(int list[], int size);

void mult_array(int list[], int size, int mult); 


// Function Definitions
bool check_size(int size) {
    return (size > 0) && (size < 2147483647);
}

void init_array(int list[], int size)
{ 
	for (int i = 0; i < size; i++)
		list[i] = 0;  
}

void input_array(int list[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i << " : ";
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

	for (int i = 0; i < size; i++)
	{
		list[i] *= mult;
	}

	cout << endl << "Array: ";

	for (int i = 0; i < size; i++)
	{
		cout << endl << list[i]; 
	}

}


#endif
