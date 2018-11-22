// Date: 22-November-2018
//if the subject marks are less than 0 or more than 100 give an exception
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	int p = 0, c = 0, m = 0;

	while (((p <= 0) || (p >= 100)) || ((c <= 0) || (c >= 100)) || ((m <= 0) || (m >= 100)))
	{
		try
		{
			cout << "Physics marks: ";
			cin >> p;
			if ((p < 0) || (p > 100))
			{
				throw(0);
			}
			cout << "chemistry marks: ";
			cin >> c;
			if ((c < 0) || (c > 100))
			{
				throw(0);
			}
			cout << "math marks: ";
			cin >> m;
			if ((m < 0) || (m > 100))
			{
				throw(0);
			}


		}
		catch (int e)
		{
			cout << "invalid marks" << endl;
		}


	}

	cout << endl; 
	cout << "physics" << p << endl;
	cout << "chemistry" << c << endl;
	cout << "maths" << m << endl;

	
	system("pause");
	return 0;

	ofstream myfile; 
	myfile.open("lab.txt");
	myfile << p << endl << c << endl << m << endl;
	
	return 0;
}
	
