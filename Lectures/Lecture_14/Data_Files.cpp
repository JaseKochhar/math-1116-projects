//The following program uses data files
//Input Data file: infile.dat
//Output Data file: outfile. dat

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib> 
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
	int num, size;
	double ave, sum;

	ifstream fin;
	ofstream fout; 

	fin.open("infile.dat");
	fout.open("outfile.dat");  

	size = 0;
	sum = 0;
	while (fin >> num)	//While there is data, read from file
	{
		size = size + 1;
		sum += num;
		fout << setw(4) << num;
		if (size % 10 == 0)
			fout << endl;
	}

	//Output to the file
	fout << endl;
	fout << "Count of Data: " << size << endl;
	fout << "Sum of Data: " << sum << endl;

	//Calculate the Average
	fout << fixed << setprecision(2);
	if (size != 0)
	{
		ave = sum / size;
		fout << "Average of Data: " << ave << endl; 

	}

	cout << "Data sucessfully written to file: outfile.dat" << endl;

	fin.close();
	fout.close();

	return 0;
}