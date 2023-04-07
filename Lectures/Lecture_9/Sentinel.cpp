//This Program illustrates a sentinel controlled while loop. 
// It loops an unknown number of times.


#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	
	const int sent = -1; 
	
	int num; 

	int sum = 0;

	cout << "Enter Number,("<<sent<<"  to stop the Program): "; 
	cin >> num ;

	while (num != sent)  
	{
		sum += num;

		cout << "Enter Number,(" << sent << "  to stop the Program): ";
		cin >> num;


	}

	cout << "Sum is: " << sum;


	return 0;
}