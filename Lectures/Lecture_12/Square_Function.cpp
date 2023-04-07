// The following program outputs the aquare of an integer


#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;
inline int square(int x) { return x * x; }

//Function Prototype


int main()
{
	cout << setw(5) << "x" << setw(5) << "x*x" << endl;
	for (int x = 1; x <= 10; x++)
	{
		cout << setw(5) << x << setw(5) << square(x) << endl;

	}
		


	return 0;
}