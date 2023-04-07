// Lab 5 Jase Kochhar

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{

	const int sent = 999;

	int num;
	double ave; 
	double sum = 0;
	int size = 0;
	cout << "Enter Number,(" << sent << "  to Stop the Program): ";
	cin >> num;

	cout << fixed << setprecision(2);
	
	
		while (num != sent)
		{

			if (num == sent && size == 1)
			{
				cout << "No Marks Processed.";


			}


			if (num < 0 || num > 100)
			{
				cout << num << " is an invalid mark." << endl;
			}

			else
			{
				sum += num;

				size++;
			}


			cout << "Enter Number,(" << sent << "  to Stop the Program): ";
			cin >> num;
		}
		
		if (num == sent && size == 0)
		{
			cout << "No Marks Processed.";


		}
		else
		{
			cout << "Average is: " << sum / size << endl;
			cout << "There were " << size << " marks processed.";

		}

	return 0;
}