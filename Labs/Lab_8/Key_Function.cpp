//Lab 8 B Jase Kochhar

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

//Function Prototype

void key_array(int list[], int size, int key);


int main()
{
	const int arraySize = 100;
	int list[arraySize];
	int size, key;

	cout << "Enter Size of List: "; 
	cin >> size;

	//Initialize Each Value in the Array

	for (int i = 0; i < size; i++)
	{
		list[i] = 0;

	}

	//Output the Elements of the First Array

	cout << endl << "Initialized Array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
	cout << endl;

	//Input Each Element of the First Array

	for (int i = 0; i < size; i++)
	{
		cout << "Enter Element: ";
		cin >> list[i];
	}

	//Output First Array

	cout << endl << "First Array: ";

	for (int i = 0; i < size; i++)
	{
		cout << endl << list[i];
	}

	//Input Key

	cout << endl << endl << "Enter Key: ";
	cin >> key;
	cout << endl;

	//Assume Key is not in the List

	key_array(list, size, key);  


	return 0;
}

void key_array(int list[], int size, int key) 
{

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



}