#include "calculator.h"
#include <iostream>
using namespace std;

calculator::calculator()
{
	result_R = 0;
	result_I = 0;
}

int calculator::add_R(int val1_R, int val2_R)
{
	return result_R = val1_R + val2_R;
}
int calculator::add_I(int val1_I, int val2_I)
{
	return result_R = val1_I + val2_I;
}
int calculator::subtract_R(int val1_R, int val2_R)
{
	return result_R = val1_R - val2_R;
}
int calculator::subtract_I(int val1_I, int val2_I)
{
	return result_R = val1_I - val2_I;
}
int calculator::multiply_R(int a, int b, int c, int d)
{
	return result_R = (a * c) - (b * d);
}

int calculator::multiply_I(int a, int b, int c, int d)
{
	return result_I = (a * d) + (b * c);
}

float calculator::divide_R(int a, int b, int c, int d)
{
	float r = 0;
	try
	{
		if (c == 0 || d == 0)
			throw "error";
		r = (((a * c) + (b * d)) / ((c * c) + (d * d)));
		return r;
	}
	catch (...)
	{
		cout << "division by zero on real end" << endl;
	}

}
float calculator::divide_I(int a, int b, int c, int d)
{
	float r = 0;
	try
	{
		if (c == 0 || d == 0)
			throw "error";
		r = (((b * c) - (a * d)) / ((c * c) + (d * d)));
		return r;
	}
	catch (...)
	{
		cout << "division by zero on imaginary end" << endl;

	}
}


