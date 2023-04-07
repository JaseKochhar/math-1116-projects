//This program illustrates a nested=if statement 
//It allows testing more than one condition.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int grade;

	cout << "Enter grade: ";
	cin >> grade;

	if (grade >= 80 && grade <= 100)

		// Conditional Operator 
		cout << (grade >= 50 ? "Pass" : "Fail");
	cout << endl;

		
	
	{

		cout << "A" << endl;
		if (grade >= 90)
			cout << "You are an A+ Student!" << endl;
		else
			cout << "You are an A- Student!" << endl;
	}
	else if (grade >= 70 && grade <= 79)
		cout << "B" << endl;
	else if (grade >= 60 && grade <= 69)
		cout << "C" << endl;
	else if (grade >= 50 && grade <= 59)
		cout << "D" << endl;
	else if (grade >= 0 && grade <= 49)
		cout << "F" << endl;
	else
		cout << "Invalid Grade \n";

	return 0;
}