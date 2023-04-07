// The following uses a Nested_if statement

// Input an iteger grade and output;
// A: 80-100
// B: 70-79
// C: 60-69
// D: 50-59
// E: 0-49

#include <iostream>
using std::cout;
using std::cin; 
using std::endl;

int main()
{
	int grade;

	cout << "Enter Grade: ";
	cin >> grade;

	if (grade >= 80 && grade <= 100)
		cout << grade << " is an A" << endl;
	else if (grade >= 70 && grade <= 79)
		cout << grade << " is an B" << endl;
	else if (grade >= 60 && grade <= 69)
		cout << grade << " is an C" << endl;
	else if (grade >= 50 && grade <= 59)
		cout << grade << " is an D" << endl;
	else if (grade >= 0 && grade <= 49)
		cout << grade << " is an F" << endl;
	else 
		cout << grade << " is invalid" << endl;

	return 0;
}