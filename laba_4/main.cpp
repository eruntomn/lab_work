#include <iostream>
#include <iomanip>
using namespace std;
//Var 4
int main()
{
    //1
    cout << "ВВести натуральные числа A, B, C" << endl;
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
        cout << "все хорошо" << endl;
        break;
    case 1:
        cout << "ошибка чтения файла" << endl;
        break;
    case 2:
        cout << "ошибка записи файла" << endl;
        break;
    case 3:
        cout << "не все поля определены" << endl;
        break;
    default:
        cout << "введено неверное значение";
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
