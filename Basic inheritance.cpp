#include <iostream>
#include <string>
using namespace std;

class members
{
public:
	members()
	{
		cout << "class 'members' created" << endl;
		ID = 0;
		name = "NULL";
	}
	void get_name(string myName)
	{
		name = myName;
		cout << "Name is: " << name << endl;
	}
	void get_ID(int myID)
	{
		ID = myID;
		cout << "ID is: " << ID << endl;
	}
	~members()
	{
		cout << "class 'members' destroyed" << endl;
	}

private:
	int ID;
	string name;
};

class student : public members
{
public:
	student()
	{
		cout << "class 'students' created" << endl;
		gpa = 0;
		_class = "NULL"; 
	}
	void get_gpa(float myGpa)
	{
		gpa = myGpa;
		cout << "GPA is: " << gpa << endl;
	}
	void get_class(string myClass)
	{
		_class = myClass;
		cout << "Class is: " << _class << endl;
	}
	~student()
	{
		cout << "class 'student' destroyed" << endl; 
	}
private:
	float gpa;
	string _class;
};

int main()
{
	student p1; 
	p1.get_name("Tahoor");
	p1.get_ID(240592); 
	p1.get_class("MTS-39"); 
	p1.get_gpa(3.6); 
	system("pause"); 
	return 0; 
}

