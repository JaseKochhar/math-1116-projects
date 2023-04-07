// Lab 6 Jase Kochhar
// The following program inputs two sets of integers and computes the sums, 
//the first time using normal methods, and the second time with a function

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

int find_sum2(int n1, int n2); 

int main ()  
{ 
	int sum1, sum2;  
	int num1 ,num2 ;
	int n1, n2; 

	cout << "Enter First Number in First Set: ";
	cin >> num1; 
	cout << "Enter Second Number in First Set: ";
	cin >> num2; 

	sum1 = num1 + num2; 

	cout << "First Sum is: " << sum1 << endl;    


	 
	cout << "Enter First Number in Second Set: ";
	cin >> n1; 
	cout << "Enter Second Number in Second Set: ";
	cin >> n2;

	sum2 = find_sum2( n1, n2); 

	cout << "Second Sum is: " << sum2 << endl;

	return 0;
}
int find_sum2(int n1, int n2)
{
	int sum2; 

	
	sum2 = n1 + n2; 
	return sum2; 

}