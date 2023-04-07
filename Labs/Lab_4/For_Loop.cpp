//This Program illustrates a sequential for loop. 
// It will add the sequence:
//		2 + 4 + 6 + 8 + 10 + 12

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	int init, fin, inc;

	cout << "Enter initial number: ";
	cin >> init;
	cout << "Enter final number: ";
	cin >> fin; 
	cout << "Enter increment: ";
	cin >> inc;

	int sum = 0;


	for (int count = init; count <= fin; count = count + inc) 
	{

		sum += count;


	}

	cout << "Sum is: " << sum << endl;


	return 0;
}