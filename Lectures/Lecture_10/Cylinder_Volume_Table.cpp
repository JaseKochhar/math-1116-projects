// The follwoing program creates a table of volumes of cylinders 
// volume = PI * radius * radius * height
// for radius 1, 2, 3 
//and height 2, 4, 6
// using a nested loop

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double vol;
	const double PI = 3.141592653;
	cout << fixed << setprecision(2); 

		cout << setw(6) << "Radius" << setw(10) << "Height" << setw(10) << "Volume" << endl; 
 	for (int radius = 1; radius <= 3; radius++)
	{
		for (int height = 2; height <= 6; height += 2)
		{
			vol = PI * radius * radius * height;
			cout << setw(6) << radius << setw(8) << height << setw(10) << vol << endl; 

		}

	}




	return 0;
}