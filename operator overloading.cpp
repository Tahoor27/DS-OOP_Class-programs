//operator overloading 

#include <iostream>
using namespace std; 

class point
{
private:
	float var;
public:
	point()
	{
		var = 0; 
	}
	point(int x)
	{
		var = x; 
	}
	point (const point &a)
	{
		var = a.var; 
	}
	point operator ++ ()
	{
		var++; 
		return var; 
	}

	point operator + (point a2)
	{
		point temp;
		temp.var = var + a2.var;
		return temp;
	}

	point operator * (point a2)
	{
		point temp;
		temp.var = var * a2.var;
		return temp;
	}

	point operator / (point a2)
	{
		point temp;
		temp.var = var / a2.var;
		return temp;
	}



	void display()
	{
		cout << var << endl; 
	}
};

int main()
{
	point p1(2), p2(3); 
	point p3 = p1 + p2; 
	point p4 = p1 * p2;
	point p5 = p1 / p2; 
	++p1; 
	p1.display();
	p3.display();
	p4.display();
	p5.display();
	
	system("pause");
	return 0; 
}
/*
class complex
{
private:
	int real;
	int imaginary; 
public:
	complex()
	{
		real = 0;
		imaginary = 0;
	}

	complex(int x, int y)
	{
		real = x; 
		imaginary = y; 
	}

	complex operator + (complex a2)
	{
		complex temp; 
		temp.real = real + a2.real;
		temp.imaginary = imaginary + a2.imaginary; 
		return temp; 
	}

	complex operator - (complex a2)
	{
		complex temp;
		temp.real = real - a2.real;
		temp.imaginary = imaginary - a2.imaginary;
		return temp;
	}


	void display()
	{
		cout << real << "+" <<"("<< imaginary << ")" <<  "i" <<  endl;
	}
};

int main()
{
	complex p1(4,4), p2(2,3); 

	complex p3 = p1 + p2; 
	complex p4 = p1 - p2; 
	p3.display();
	p4.display();
	system("pause");
	return 0; 
}*/