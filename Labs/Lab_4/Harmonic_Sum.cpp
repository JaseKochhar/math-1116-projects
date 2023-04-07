//This Program illustrates a sequential for loop. 
// It will add the harmonic sequence:


#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	int num; 

	cout << "Enter number: ";
	cin >> num; 
	

	int sum = 0;

	cout << fixed << setprecision(2); 

	for (double count = 1; count <= num; count += 1) 
	{

		sum = sum + (1 / count);


	}

	cout << "Sum is: " << sum << endl;


	return 0;
}