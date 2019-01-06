#include<iostream>
using namespace std;

class test
{
public:
	test()
	{
		name = {"NULL"}; 
		ID = 0; 
	}

	friend ostream &operator << (ostream &output, test &p)
	{
		output << "Name is: " << p.name << endl; 
		output << "ID is: " << p.ID << endl; 
		return output; 
	}
	friend istream &operator>>(istream &input,test &p)
	{
		cout << "please enter your name and age" << endl; 
		input>> p.name >> p.ID; 
		return input; 
	}

		
private:
	char name[40]; 
	int ID; 
		
};

int main()
{
	test p1; 
	cin >> p1;
	cout << p1 << endl; 
	system("pause");
	return 0; 
}