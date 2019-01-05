#include <iostream>
using namespace std; 

template <class T>

/*T square(T a)
{
	T result; 
	result = a * a; 
	return result; 
}
int main()
{
	int a; 
	cout << "please enter a number of any type:" << endl; 
	cin >> a; 
	cout << square<int>(a) << endl;
	system("pause");
	return 0;
}*/

class calculator 
{
public:
	calculator()
	{
		result = 0; 
	}

	T add(T num1, T num2)
	{
		cout << "after addition:" << endl; 
		result = num1 + num2; 
		return result; 
	}

	T subtract(T num1, T  num2)
	{
		cout << "after subtraction:" << endl; 
		result = num1 - num2; 
		return result; 
	}

	T multiply(T num1, T num2)
	{
		cout << "after multiplication:" << endl;
		result = num1 * num2; 
		return result; 
	}

	T divide(T num1, T num2)
	{
		cout << "after division:" << endl;
		result = num1 / num2;
		return result; 
	}

	~calculator()
	{
		result; 
	}

	

private:
	T result; 
};

int main()
{
	cout << "enter two numbers:" << endl; 
	int a; 
	int b; 
	cin >> a >> b; 

	calculator <int> o; 
	cout << o.add(a, b) << endl; 
	cout << o.subtract(a, b) << endl;
	cout << o.multiply(a, b) << endl;
	cout << o.divide(a, b) << endl;
	system("pause");
	return 0; 
}