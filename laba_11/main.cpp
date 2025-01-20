#include <iostream>
#include <cmath>
/*Ввести последовательность натуральных чисел. Если в последовательности есть не менее 3-х чисел, 
заканчивающихся цифрой 2 или 4, упорядочить последовательность по невозрастанию первой цифры. 
В противном случае удалить из последовательности простые числа, и продублировать числа, кратные 10. 
Последовательность хранить в двусвязном циклическом списке с фиктивным элементом*/

using namespace std;

struct Node
{
    int info;
    Node * next;
    Node * prev;
};

void print_list(Node * top)
{
    Node * p = top->next;
    while (p != top) {
        cout << p->info << " ";
        p = p->next;
    }
}

void dublicate_numbers(Node * &top)
{
    Node * p = top->next;
    while (p != top)
    {
        if (p->info % 10 == 0) {
            Node * q = new Node;
            q->info = p->info;
            q->next = p->next;
            q->prev = p;
            p->next = q;
            q->next->prev = q;
            p = q->next; //перескочить через узел
        }
        else p = p->next;
    }
}

bool isPrime(int x) {
	int cnt = 0;
	if (x <= 2) return 1;
	for(int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;

}

void remove_numbers(Node * &top)
{
    Node * p = top->next;
    while (p != top) {
        if (isPrime(p->info)) {
            p->prev->next = p->next;
            p->next->prev = p->prev;
            Node * temp = p;
            p = p->next;
            delete temp;
        }
        else {
            p = p->next;
        }
    }
}

int firstDigit(int x) {
	while (x >= 10) x /= 10;
	return x;
}

void sort_list(Node * top) //сортировка по невозрастанию
{
    for(Node * a = top ->next; a->next != top; a = a->next)
    	for(Node * b = a ->next; b != top; b = b->next)
            if (firstDigit(a->info) < firstDigit(b->info)) swap(a->info, b->info);
}

bool CountOfDigits(Node * top) 
{
	Node * p = top->next;
	int cnt = 0;
	while(p != top) 
	{
		if (((p->info) % 10 == 2) || ((p->info) % 10 == 4)) cnt++;
		p = p->next;
	}
	if (cnt >= 3) return 1;
	else return 0;
}


void AddBack(Node *top, int info) {
	Node* p = new Node;
	p->info = info;
	p->next = top;
	p->prev = top->prev;
	top->prev->next = p;
	top->prev = p;
}

int main()
{
	Node* top = new Node;
	top->next = top;
	top->prev = top;

	int n;
	cin >> n;


	for(int i = 0; i < n; i++) 
	{
		int x;
		cin >> x;
		AddBack(top, x);
	}
	if (CountOfDigits(top)) {
		sort_list(top);
	}
	else {
		remove_numbers(top);
		dublicate_numbers(top);
	}
	
    print_list(top);

	delete top;
    return 0;
}
