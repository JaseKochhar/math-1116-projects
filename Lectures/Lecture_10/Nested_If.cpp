// The follwoing program illustrates a NESTED while loop.
// A NESTED loop is a loop inside another loop.

#include <iomanip>
#include <iostream>

using namespace std; 

int main()
{
	int numRows, numCols;
	int I, J;

	cout << "Enter Number of rows: ";
	cin >> numRows;
	cout << "Enter Number of columns: ";
	cin >> numCols;

	I = 1 ;

	while (I <= numRows)
	{
		J = 1;
		while (J <= numCols)  
		{
			cout << setw(5) <<( I * J );
			J += 1;
		}
		cout << endl; 
		
		I += 1;
	}




	return 0; 
}