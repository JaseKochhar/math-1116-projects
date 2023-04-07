//Name: Jase Kochhar

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::fixed;
using std::setprecision;

int main()
{
	//Declaration 

	const double Service_Charge = 50.0;
	double Consumption_Charge, Maintenance_Charge, Tax, Subtotal, Usage, Total; 

	cout << fixed << setprecision(2);

	cout << "Enter the number of cubic meters: ";
	cin >> Usage;
	

	if (Usage < 0)
		cout << "Invalid Entry" << endl;

	else
	{
		cout << endl <<"You used " << Usage << " cubic meters in this period" << endl; 
		Consumption_Charge = (1.23 * Usage);
		if (Usage <= 100)
			Maintenance_Charge = (0.3 * Consumption_Charge);
		else if (Usage <= 300)
			Maintenance_Charge = (0.5 * Consumption_Charge);
		else if (Usage <= 500)
			Maintenance_Charge = (0.8 * Consumption_Charge);
		else
			Maintenance_Charge = Consumption_Charge;

		Subtotal = Service_Charge + Consumption_Charge + Maintenance_Charge;
		Tax = 0.15 * Subtotal;
	
		Total = Subtotal + Tax;

		cout << "The service charge is: $" << Service_Charge << endl;  
		cout << "The consumption charge is: $" << Consumption_Charge << endl; 
		cout << "The maintenance charge is: $" << Maintenance_Charge << endl;
		cout << "The subtotal is: $" << Subtotal << endl;
		cout << "Tax: $" << Tax << endl;  
		cout << "Total: $" << Total << endl;  
	}


	
	


	return 0; 
}