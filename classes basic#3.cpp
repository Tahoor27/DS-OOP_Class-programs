#include <iostream>
using namespace std; 

class Employee {
private:
	int final_s;
	int a;
	int b; 

public:
	
	void get_info(int s, int h)
	{
		a = s;
		b = h;
	}
	void Addsal(int a ,int b)
	{
		if (a < 500)
		{
			final_s = a + 10; 
		}
	}
	void Addwork(int a, int b)
	{
		if (b > 6)
		{
			final_s = a + 5; 
		}
	}
	int get_value()
	{
		return final_s;
	}
};

int main()
{
	int s=0;
	int h=0;
	cin >> s;
	cin >> h; 
	Employee a;
	a.get_info(s, h);
	a.Addsal(s, h);
	a.Addwork(s, h);
	cout << "final salary " << a.get_value() << endl;
	system("pause");
	return 0;
}