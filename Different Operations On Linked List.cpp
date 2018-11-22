//Linked List 
#include <iostream>
using namespace std;

struct node {
	int data;
	node * next; //creating pointer to the node. 
};

class l_list
{
private:
	node * head;//intializing a head
public:
	l_list() {
		head = NULL;
	}
	void list_build() // Basic Function to Build a List.
	{
		node*N;
		node* temp; 
		N = new node; // making a new node with its pointer called as N
		N->data = 1; 
		head = N; // Now head points to N. 
		temp = N; //Similarly temp points to N
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
	void insertion_start(int val1) //inserting a node at start
	{

		node* N;
		N = new node;
		N->next = head;
		head = N;
		N->data = val1;
	}
	void del_start() // Deleting a node from start
	{
		node*N; 
		N = head->next; // N now point to the 2nd element 
		delete head; 
		head=N; //head now points to N
		
	}
	void insert_end(int val) // Inserting a node at end
	{
		node*N = new node; 
		node*temp=new node; 
		N->next = head; 
		while (N->next != NULL) //Traversing till the last node is reached. 
		{
			N = N->next;
		}
		N->next = temp;
		temp->data = val; 
		temp ->next = NULL;
	}
	void del_end() // Deleting a node from end. 
	{
		node * c = head; // imagine c to be current node. 
		node * p = head; // imagine p to be previous node. 

		while (c->next != NULL)
		{
			p = c; //c moves forward while p take c's place. 
			c = c -> next; 
		}
		p->next = NULL;
		delete c; 
	}
	void insert_sp(int val, int pos) // Inserting at a specific position.  
	{
		node*N; 
		node*temp = new node; 
		N = head; 
		for (int i = 1; i < pos; i++) // starting from 1 pos gives the entered position 
		{
			N = N->next; 
		}
		temp->next = N->next;
		N -> next = temp; 
		temp->data = val;
	}
	void del_sp(int pos) // deleting from a specific position 
	{
		node * c = head; // imagine c to be current node. 
		node*p = head; // imagine p to be previous node.

		for (int i = 0; i < pos; i++) // pos = position 
		{
			p = c; 
			c = c->next;
		}
		p->next = c->next; 
		delete c; 
	}
	void reverse_list() // fucntion that reverses the list 
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
	void traverse() // fucntion that would traverse through the list and print the data
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

int main() // we will call all the functions now. 
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
