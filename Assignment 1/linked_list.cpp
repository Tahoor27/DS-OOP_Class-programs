#include <iostream>
using namespace std;
#include "linked_list.h"

linked_list::linked_list()
{
	head = NULL;
}
void linked_list::insertion_start(int val1, int val2)
{
	node * N = new node;
	N->next = head;
	head = N;
	N->val_R = val1;
	N->val_I = val2;
}
void linked_list::del_start()
{
	node * temp = new node;
	temp = head->next;
	delete head;
	head = temp;
}
void linked_list::insertion_end(int val1, int val2)
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
void linked_list::del_end()
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

void linked_list::insertion_sp(int val1, int val2, int b)
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
void linked_list::del_sp(int b)
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
void linked_list::traverse()
{
	cout << "The final list is as follows:" << endl;
	node * temp = head;
	while (temp != NULL)

	{
		if (temp->val_I > 0)
		{
			cout << temp->val_R << "" << "+" << temp->val_I << "i" << endl;
		}
		else if (temp->val_I == 0)
		{
			cout << temp->val_R << "" << "+" << temp->val_I << "i" << endl;
		}
		else
			cout << temp->val_R << "" << temp->val_I << "i" << endl;
		temp = temp->next;
	}
}
