#include <iostream>

//Var 4

using namespace std;

struct Node
{
    int info;     
    Node * next;  
};

void print_list(Node * top)
{
    Node * p = top;  
    while (p != nullptr) {
        cout << p->info << " ";  
        p = p->next; 
    }
}

bool list_is_sorted1(Node * top)
{
    Node * p = top;

    while (p->next != nullptr) 
	{
        if (p->info >= p->next->info)
            return false;
        else
            p = p->next; 
	}
    return true;
}

void remove_numbers(Node * &top)
{
    while (top != nullptr && top->info % 4 == 0) 
	{
        Node * temp = top->next;
        delete top;
        top = temp;
    }

    Node * p = top;
    while (p != nullptr && p->next != nullptr) 
	{
        Node * temp = p->next;
		int x = temp->info;
		int cnt = 0;
		for(int i = 0; i < temp->info; i++) 
		{
			if (((x % 10) != 2) || ((x % 10) != 4) || ((x % 10) != 6)) 
				cnt++;
			x /= 10;
		}
        if (cnt != 0) {
            p->next = temp->next;
            delete temp;
        }
        else {
            p = temp;
        }
    }
}

void duplicate_numbers(Node * top)
{
    Node * p = top;
    while (p != nullptr)
	 {
        int x = p->info;
		int count6 = 0;
		int count9 = 0;
		for(int i = 0; i < x; i++) 
		{
			if (x % 10 == 6)
				count6++;
			else if (x % 10 == 9)
				count9++;
			x /= 10;
		}
		if (count6 > 0 && count9 > 0)
		{
            Node * q = new Node; 
            q->info = p->info;  
            q->next = p->next;  
            p->next = q;
            p = q->next;
        }
        else {
            p = p->next; 
        }
    }
}

void sort_list(Node * top)
{
    for (Node * a = top; a->next != nullptr; a = a->next)
        for (Node * b = a->next; b->next != nullptr; b = b->next)
            if (a->info > b->info) swap(a->info, b->info);
}

void delete_list(Node * top)
{
    Node * p = top;
    while (p != nullptr) {
        Node * temp = p->next;
        delete p;
        p = temp;
    }
}


int main()
{
	//1

	Node * top = nullptr;

	int n;
	cin >> n;

	int x;
	cin >> x;

	top = new Node;
	top->info = x;
	top->next = nullptr;

	Node * pp = top;

	for (int i = 1; i < n; i++) 
	{
		cin >> x;
		Node * p = new Node; 
		pp->next = p;
		p->info = x;
		p->next = nullptr;
		pp = p;
	}

	cout << "Введённый список: ";
	print_list(top);	

	if (list_is_sorted1(top)) 
	{
		remove_numbers(top);
		duplicate_numbers(top);
	}
	else sort_list(top);
	
	print_list(top);
	delete_list(top);
	return 0;
}