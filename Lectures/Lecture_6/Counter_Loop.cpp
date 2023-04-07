// The following program illustrates a counter-controlled while loop
// A counter-controlled loop will loop a KNOWN NUMBER OF TIMES.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num, counter;

	cout << "How many times to loop? ";
	cin >> num;

	counter = 1;
	while (counter <= num)
	{
		cout << "C++ is Fun!!" << endl;
		counter = counter + 1;


	}

	return 0;
}