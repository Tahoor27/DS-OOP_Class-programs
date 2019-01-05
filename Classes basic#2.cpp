#include <iostream>
using namespace std;

class Rect {
private:
	int a;
	int p; 
public:
	Rect(int i = 0, int j = 0)
	{
		a = i;
		p = j;
	}
	void area(int l, int w)
	{
		a = l * w; 
	}
	void para(int l , int w)
	{
		p = 2 * (l + w);
	}
	int get_value()
	{
		return a;
		
	}
	int get_value2()
	{
		return p;

	}

};

int main()
{
	Rect a; 
	a.area(4, 5);
	a.para(4, 5);
	cout << "area1 " << a.get_value() << endl; 
	cout << "parameter1 " << a.get_value2() << endl;
	a.area(5, 8);
	a.para(5, 8);
	cout << "area2 " << a.get_value() << endl;
	cout << "parameter2 " << a.get_value2() << endl;
	system("pause");
	return 0; 
}