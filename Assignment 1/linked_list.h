#ifndef list
#define list

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
	linked_list();

	void insertion_start(int, int);

	void del_start();

	void insertion_end(int, int);

	void del_end();


	void insertion_sp(int, int, int);

	void del_sp(int);

	void traverse();

};

#endif 
