// The follwoing program illustrates a NESTED for loop.
// A NESTED loop is a loop inside another loop.

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int numRows, numCols;
	

	cout << "Enter Number of rows: ";
	cin >> numRows;
	cout << "Enter Number of columns: ";
	cin >> numCols;


	for (int I = 1; I <= numRows ; I +=1) 
	{
		for (int J = 1; J <= numCols; J += 1)
		{
			cout << setw(5) << (I * J);
			
		}
		cout << endl;

	}




	return 0;
}