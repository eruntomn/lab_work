#include <iostream>
#include <cmath>

using namespace std;

class MyVector
{
private:
    int _size;
    int _capacity;
    int * _data;

public:
    int size() //публичные функции класса - методы
    {
        return _size;
    }

    int capacity()
    {
        return _capacity;
    }

    int& operator [] (int i) //перегружаем оператор [], чтобы обращаться сразу a[i] и можем менять знач-е благодаря &
    {
        return _data[i];
    }

    void setValue(int i, int x) //присвоить новое значение
    {
        if (i >= 0 && i < _size && x >= 0)
            _data[i] = x;
    }

    MyVector()
    {
        _size = 0;
        _capacity = 8;
        _data = new int [8];
    }

    MyVector(MyVector &v)
    {
        _size = v.size();
        _capacity = v.capacity();
        _data = new int [_capacity];
        for (int i = 0; i < _size; i++)
            _data[i] = v[i];
    }

    MyVector(int n, int initialValue)
    {
        _capacity = 2 * n;
        _size = n;

        _data = new int [2 * n];
        for (int i = 0; i < n; i++)
            _data[i] = initialValue;
    }

    void print()
    {
        for (int i = 0; i < _size; i++)
            cout << _data[i] << " ";
        cout << endl;
    }

    MyVector& operator = (MyVector &v) //оператор копирования
    {
        _size = v.size();
        _capacity = v.capacity();
        _data = new int [_capacity];
        for (int i = 0; i < _size; i++)
            _data[i] = v[i];

        return *this;
    }

    ~MyVector() //деструктор
    {
        delete [] _data;
    }

    int& front()
    {
        return _data[0];
    }

    int& back()
    {
        return _data[_size];
    }
    
    void push_back(int x)
    {
        if (_size < _capacity) {
            _data[_size] = x;
            _size++;
        }
        else {
            int * new_data = new int [_capacity + 5];
            for (int i = 0; i < _capacity; i++)
                new_data[i] = _data[i];
            new_data[_size] = x;
            delete [] _data;
            _data = new_data;
            _size++;
            _capacity += 5;
        }
    }
    
    void resizeL(int n)
    {
        if (_size > n) {
            int *new_data = new int [_size-n];
            for (int i = 0; i < _size-n+1; i++)
                new_data[i] = _data[i];
            new_data[_size] = n;
            delete [] _data;
            _data=new_data;
            _size = n;
        }
    }
    void resizeR(int n, int value) 
    {
        if (_size < n) 
        {
            for (int i = 0; i < n-(_size)+1; i++) 
                push_back(value);
            _size = n;
        }
    }
    void reserve(int n) 
    {
        int a=0; //пустое значение переменной?
        if (_size < n) 
        {
            for (int i = 0; i < n-(_size)+1; i++)
                push_back(a);
            _size = n;
        }
    }
    
    void shrink_to_fit(int n)
    {
        for (int i = 0; i < _size; i++) 
        {
            if ((i+1) <= n) continue;
            else _data[i] = 0;
        }
    }
    
    void insert(int x, int value)
    {
        if (x == _size) _data.push_back(x);
        else 
        {
            int *new_data = new int [_size+1];
            while (i != x) {
                new_data = _data[i];
            }
                
        }
    }
};

int main()
{
    MyVector a(5, 29);
    //a.print();

    // cout << a[3];
    // a[3] = 50;

    // a[3] = 100;
    // a[1] = 200;

    // a.print();

    // MyVector b;
    // b = a;

    // b.print();

    // b[1] = 777;

    // a.print();
    // b.print();
    
    //a.resizeL(3);
    cout << a.size() << endl;
    a.shrink_to_fit(3);
    cout << a.size() << endl;
    a.print();
    
    return 0;
}