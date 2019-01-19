#include<iostream>
using namespace std;
#include"calculator1.h"
#include"linked_list1.h"

int main()
{
	cout << "M.TAHOOR AASIM MTS-39(B)" << endl;
	cout << "REG-NO: 240592" << endl;
	cout << "___________________________________________________________" << endl;
	int real, imaginary;
	linked_list o;
	o.insertion_start(4, 3);
	o.insertion_start(3, -3);
	o.insertion_start(4, 5);
	cout << "All operations are performed using the members of the intial list. Each member is refered to as (1),(2),(3) respectively" << endl;
	o.traverse();
	cout << "___________________________________________________________" << endl;
	cout << "Performing addition of (1) and (2) and storing at start:" << endl;
	calculator l;
	real = l.add_R(4, 3);
	imaginary = l.add_I(5, -3);
	o.insertion_start(real, imaginary);
	o.traverse();
	cout << "___________________________________________________________" << endl;
	cout << "Performing subtraction of (1) and (3) and storing at last :" << endl;
	real = l.subtract_R(4, 4);
	imaginary = l.subtract_I(5, 3);
	o.insertion_end(real, imaginary);
	o.traverse();
	cout << "___________________________________________________________" << endl;
	cout << "Performing multiplication of (2) and (3) and storing at last:" << endl;
	real = l.multiply_R(3, -3, 4, 3); // first two numbers are a+bi and the last two are c+di
	imaginary = l.multiply_I(3, -3, 4, 3); // first two numbers are a+bi and the last two are c+di
	o.insertion_end(real, imaginary);
	o.traverse();
	cout << "___________________________________________________________" << endl;
	cout << "Performing division of (1) and (3) and storing at last:" << endl;
	real = l.divide_R(4, 5, 4, 3); // first two numbers are a+bi and the last two are c+di
	imaginary = l.divide_I(4, 5, 4, 3); // first two numbers are a+bi and the last two are c+di
	o.insertion_end(real, imaginary);
	o.traverse();
	cout << "___________________________________________________________" << endl;
	cout << "From the recent final list deleting at position 4:" << endl;
	o.del_sp(4);
	o.traverse();
	cout << "___________________________________________________________" << endl;
	cout << "From the recent final list deleting at end:" << endl;
	o.del_end();
	o.traverse();
	
	//code if there is an exception:
	cout << endl;
	real = l.divide_R(4, 4,5, 0); // first two numbers are a+bi and the last two are c+di
	imaginary = l.divide_I(4, 4,5, 0);
	cout << endl;
	cout << endl;
	o.traverse(); 
	system("pause");
	return 0;
}
