//Linked List 
#include <iostream>
using namespace std;

struct node {
	int data;
	node * next;
};

class l_list
{
private:
	node * head;
public:
	l_list() {
		head = NULL;
	}
	void list_build()
	{
		node*N;
		node* temp; 
		N = new node;
		N->data = 1; 
		head = N;
		temp = N; 
		N = new node; 
		N->data = 2; 
		temp->next = N;
		temp = temp->next; 
		N = new node;
		N->data = 3;
		temp->next = N;
		temp = temp->next;
		N = new node;
		N->data = 4;
		temp->next = N;
		N->next = NULL;
	}
	void insertion_start(int val1)
	{

		node* N;
		N = new node;
		N->next = head;
		head = N;
		N->data = val1;
	}
	void del_start()
	{
		node*N; 
		N = head->next;
		delete head; 
		head=N; 
		
	}
	void insert_end(int val)
	{
		node*N = new node; 
		node*temp=new node; 
		N->next = head; 
		while (N->next != NULL)
		{
			N = N->next;
		}
		N->next = temp;
		temp->data = val; 
		temp ->next = NULL;
	}
	void del_end()
	{
		node * c = head; 
		node * p = head; 

		while (c->next != NULL)
		{
			p = c; 
			c = c -> next; 
		}
		p->next = NULL;
		delete c; 
	}
	void insert_sp(int val, int pos)
	{
		node*N; 
		node*temp = new node; 
		N = head; 
		for (int i = 1; i < pos; i++)
		{
			N = N->next; 
		}
		temp->next = N->next;
		N -> next = temp; 
		temp->data = val;
	}
	void del_sp(int pos)
	{
		node * c = head; 
		node*p = head; 

		for (int i = 0; i < pos; i++)
		{
			p = c; 
			c = c->next;
		}
		p->next = c->next; 
		delete c; 
	}
	void reverse_list()
	{
		cout << endl; 
		cout << "Performing reverse!!" << endl; 
		cout << endl; 
		node* p;
		node* q;
		node* r; 
		p = NULL; 
		q = head; 
		r = q->next; 
		while (q!= NULL)
		{
			q -> next = p; 
			p = q;
			q = r;
			if (r != NULL)
			{
				r = r->next; 
			}
		}
		head = p; 
	}
	void traverse()
	{
		node * temp = head;
		cout << "the final list is:" << endl;
		while (temp != NULL)

		{

			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};

int main()
{
	l_list o;
	o.list_build(); 
	o.insertion_start(5);
	o.del_end();
	o.del_start();
	o.insert_end(5);
	o.insert_sp(7, 3);
	o.del_sp(3);
	o.traverse();
	o.reverse_list();
	o.traverse(); 
	system("pause");
	return 0;
}