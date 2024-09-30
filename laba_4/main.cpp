#include <iostream>
#include <iomanip>
using namespace std;
//Var 4
int main()
{
    //1
    cout << "������� ����������� ����� A, B, C" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if (((a + b) % c == 0) && (c % b == 0))
    {
        cout << ((a + b) / c) - (c / b) << endl;
    }
    else if (((a + b) % c == 0) && ((c % b) != 0))
    {
        cout << ((a + b) / c) + (b * c) << endl;
    }
    else
        cout << a - b + c << endl;


    //2
    int n;
    cin >> n;
    switch (n)
    
    {
    case 0:
        cout << "��� ������" << endl;
        break;
    case 1:
        cout << "������ ������ �����" << endl;
        break;
    case 2:
        cout << "������ ������ �����" << endl;
        break;
    case 3:
        cout << "�� ��� ���� ����������" << endl;
        break;
    default:
        cout << "������ �� ����������";
        break;
    }


    //3
    int c;
    cin >> c;
    if (c == -1)
        cout << "Negative number" << endl;
    else if (c == 1)
        cout << "Pozitive number" << endl;
    else
        cout << "Error";

}
