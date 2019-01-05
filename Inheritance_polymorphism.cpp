#include <iostream>
using namespace std; 

class shape
{
protected:
	float length; 
public:
	shape()
	{
		length = 0; 
		cout << "This is the base constructor!" << endl; 
	}

	virtual float area()
	{
		cout << "area fucntion in base" << endl; 
		return 1; 
	}
	virtual float parameter()
	{
		cout << "parameter fucntion in base" << endl; 
		return 1; 
	}
	
	~shape()
	{
		cout << "This is the base destructor!" << endl; 
	}
};

class rectangle : public shape
{
protected:
	float width; 
public:
	rectangle()
	{
		width = 0; 
		cout << "This is the derived class constructor!" << endl; 
	}
	rectangle(float x, float y)
	{
		cout << "overloaded constructor of rectangle:" << endl; 
		width = x; 
		length = y; 
	}
	float area()
	{
		return (width * length); 
	}
	float parameter()
	{
		return (2 * (length + width));
	}
	~rectangle()
	{
		cout << "This is the derived class destructor!" << endl;
	}
};
class triangle :public shape
{
private:
	float height; 
public:
	triangle()
	{
		height = 0; 
		cout << "Constructor of class drived from rectangle!" << endl;
	}
	triangle(float x, float y)
	{
		cout << "overloaded constructor of triangle" << endl;
		height = x; 
		length = y; 
	}
	float area()
	{
		return ((length * height)/2); 
	}
	float parameter()
	{
		return (3 * length); 
	}
	~triangle()
	{
		cout << "destructor of class drived from rectangle!" << endl;
	}
};


class circle : public shape
{
protected:
	float radius; 
public:
	circle()
	{
		radius = 0; 
	}
	circle(int x)
	{
		radius = x; 
	}
	float area()
	{
		return (3.143*(radius*radius));
	}
	float parameter()
	{
		return (2 * 3.143*radius); 
	}

};

int main()
{
	rectangle p1(3, 2);
	cout << "The area of rectangle is: " << p1.area() << endl;
	cout << "The parameter of rectangle is: " << p1.parameter() << endl;
	triangle p2(3, 4);
	cout << "The area of triangle is: " << p2.area() << endl; 
	circle p3(3);
	cout << "The area of circle is: " << p3.area() << endl; 
	cout << "The parameter of circle is: " << p3.parameter() << endl; 
	shape *p; 
	rectangle d(3,2); 
	p = &d; 
	cout <<"The area of rectangle using polymorphism: " <<  p->area() << endl;
	system("pause");
	cout << "heloo" << endl;
	return 0; 
}