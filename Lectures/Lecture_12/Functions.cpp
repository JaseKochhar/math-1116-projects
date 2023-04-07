// The following program uses functions


#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
void message();
int get_value();
int sum(int n1, int n2);
int prod(int n1, int n2); 
void output_results(int sum_ans, int prod_ans); 

int main()
{

	int n1, n2, sum_ans, prod_ans;   

	message();

	n1 = get_value();
	n2 = get_value();
	sum_ans = sum(n1, n2);
	prod_ans = prod(n1, n2); 
	output_results(sum_ans, prod_ans); 


	return 0;
}


	//Function Prototype
	void message()
{
		cout << "The following program uses functions. " << endl;
		cout << "It finds the sum and the product. " << endl;
}

int get_value()
{
	int n;

	cout << "Enter Integer: ";
	cin >> n;

	return n; 
}

int sum(int n1, int n2)
{
	
	return n1 + n2;


}
int prod(int n1, int n2)
{

	return n1 * n2;

}
void output_results(int sum_ans, int prod_ans)
{
	cout << "Sum is: " << sum_ans << endl;
	cout << "Product is: " << prod_ans << endl;

}