#include <iostream>
using namespace std; 

class calculator
{
public:

	calculator()
	{
		result_R = 0;
		result_I = 0;
	}

	int add_R(int val1_R, int val2_R)
	{
		return result_R = val1_R + val2_R;
	}
	int add_I(int val1_I, int val2_I)
	{
		return result_R = val1_I + val2_I;
	}
	int subtract_R(int val1_R, int val2_R)
	{
		return result_R = val1_R - val2_R;
	}
	int subtract_I(int val1_I, int val2_I)
	{
		return result_R = val1_I - val2_I;
	}
	int multiply_R(int val1_R, int val2_R)
	{
		return result_R = val1_R * val2_R;
	}
	int multiply_I(int val1_I, int val2_I)
	{
		return result_R = val1_I * val2_I;
	}
	int divide_R(int val1_R, int val2_R)
	{
		return result_R = val1_R / val2_R;
	}
	int divide_I(int val1_I, int val2_I)
	{
		return result_R = val1_I / val2_I;
	}
	
private:
	int result_R;
	int result_I; 
};

struct node
{
	int val_R;
	int val_I; 
	node * next;
};

class linked_list {
private:
	node * head;
public:
	linked_list()
	{
		head = NULL;
	}
	void insertion_start(int val1, int val2)
	{
		node * N = new node;
		N->next = head;
		head = N;
		N->val_R = val1;
		N->val_I = val2;
	}
	void del_start()
	{
		node * temp = new node;
		temp = head->next;
		delete head;
		head = temp;
	}
	void insertion_end(int val1, int val2)
	{
		node * N = head;
		node * temp = new node;

		while (N->next != NULL)
		{
			N = N->next;
		}

		N->next = temp;
		temp->val_R = val1;
		temp->val_I = val2;
		temp->next = NULL;
	}
	void del_end()
	{
		node * current = head;
		node * previous = head;

		while (current->next != NULL)
		{
			previous = current;
			current = current->next;

		}

		previous->next = NULL;
		delete current;
	}

	void insertion_sp(int val1, int val2, int b)
	{
		node * temp = new node;
		node * N = head;

		for (int i = 1; i < b; i++)
		{
			N = N->next;
		}
		temp->next = N->next;
		N->next = temp;
		temp->val_R = val1;
		temp->val_I = val2;
	}
	void del_sp(int b)
	{
		node * current = head;
		node * previous = head;


		for (int i = 1; i <b; i++)
		{
			previous = current;
			current = current->next;

		}
		previous->next = current->next;
		delete current;
	}
	void traverse()
	{
		cout << "The final list is as follows:" << endl;
		node * temp = head;
		while (temp != NULL)

		{
			if (temp->val_I > 0)
			{
				cout << temp->val_R << "" << "+" <<  temp->val_I << "i" << endl;
			}
			else if (temp -> val_I == 0)
			{
				cout << temp->val_R << "" << "+" << temp->val_I << "i" << endl;
			}
			else
				cout << temp->val_R << "" << temp->val_I << "i" << endl;
			temp = temp->next;
		}
	}
};
int main()
{
	cout << "M.TAHOOR AASIM MTS-39(B)" << endl; 
	cout << "___________________________________________________________" << endl;
	int real, imaginary; 
	linked_list o;
	o.insertion_start(4, 3);
	o.insertion_start(3, -3);
	o.insertion_start(4, 5);
	cout << "All operations are performed using the members of the intial list. Each member is refered to as (1),(2),(3) respectively" << endl; 
	o.traverse(); 
	cout <<"___________________________________________________________" << endl; 
	cout << "Performing addition of (1) and (2) and storing at start:" << endl;
	calculator l; 
	real = l.add_R(4,3);
	imaginary = l.add_I(5,-3);
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
	real = l.multiply_R(3, 4);
	imaginary = l.multiply_I(-3, 3);
	o.insertion_end(real, imaginary);
	o.traverse();
	cout << "___________________________________________________________" << endl;
	cout << "Performing division of (1) and (3) and storing at last:" << endl; 
	real = l.divide_R(4, 4);
	imaginary = l.divide_I(5, 3);
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
	system("pause");
	return 0; 
}