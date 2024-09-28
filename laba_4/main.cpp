#include <iostream>
#include <iomanip>
using namespace std;
//Var 4
int main()
{
    /*
    //1
    cout << "¬ведите натуральные числа A, B, C" << endl;
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
        cout << a - b + c << endl; */
    int n;
    cin >> n;
    switch (n)
    
    {
    case 0:
        cout << "все хорошо" << endl;
        break;
    case 1:
        cout << "ошибка чтени€ файла" << endl;
        break;
    case 2:
        cout << "ошибка записи файла" << endl;
        break;
    case 3:
        cout << "не все пол€ определены" << endl;
        break;
    default:
        cout << "ошибка не существует";
        break;
    }
}
