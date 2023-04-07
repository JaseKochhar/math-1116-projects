//The following code illustrates a random number generator
//It uses the built in function: rand()
//to generate an integer between 0 and 32,767
// You must include: #include <cstdlib>

//Seeding the random number generator allows different numbers 
//to be generated each time the function is called

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
	int num, result, dice; 


	srand(time(0));

	for (int i = 1; i <= 100; i++)
	{
		dice = rand() % 6 + 1 ;
		cout << setw(10) << dice;

		if (i % 5 == 0)
			cout << endl;
	}


	//result = num % 6;   




	return 0;
}