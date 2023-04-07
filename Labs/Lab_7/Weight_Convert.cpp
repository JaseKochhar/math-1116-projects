//Lab 7 Jase Kochhar

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

//Function Prototype
void weightConvert(int kg, int g, int &lb, int& oz);

int main()
{
	int kg, g, lb, oz; 
	
	
	cout << "Enter Kilograms: ";
	cin >> kg;

	cout << "Enter Grams: ";
	cin >> g; 

	weightConvert(kg, g, lb, oz); 

	cout << "Pounds: " << lb << endl;
	cout << "Ounces: " << oz << endl;  

	return 0;
}
//Function Defintion
void weightConvert(int kg, int g, int& lb, int& oz)
{
	double temp;  

	temp = 2.2046 * (kg + (g / 1000.0)); 

	lb = static_cast<int>(temp + 0.5);

	oz = static_cast<int>(((temp - lb) * 16.0) + 0.5);
	 
}
