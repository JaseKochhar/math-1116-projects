//The following program illustrates a switch statement

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int amount;

	cout << "Enter coin amount: ";
	cin >> amount;

	switch (amount)
	{
	case 1:
		cout << "Amount entered is a Penny." << endl << endl;
		break;
	case 5:
		cout << "Amount entered is a Nickel." << endl << endl;
		break;
	case 10:
		cout << "Amount entered is a Dime." << endl << endl;
		break;
	case 25:
		cout << "Amount entered is a Quarter." << endl << endl;
		break;
	case 100:
		cout << "Amount entered is a Loonie." << endl << endl;
		break;
	case 200:
		cout << "Amount entered is a Toonie." << endl << endl;
		break;
	default:
		cout << "invalid amount." << endl << endl;

	}



}