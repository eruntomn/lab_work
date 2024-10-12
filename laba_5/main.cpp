#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Var 4

int main() 
{
    //1
    int mx = 0, s = 0, ai = -1;
    int cnt = 0;
    while (true) 
    {
        int n;
        cin >> n;
        if (n <= 0) break;
        cnt += 1;
        if (n % 10 == 0 || n % 10 == 7) 
        {
            s += n;
            if (n > mx) 
            {
                mx = n;
                ai = cnt;
            }
        }
    }
    cout << "Сумма равна " << s << ", наибольшее число равно  " << mx << ", номер этого числа в последовательности равен " << ai;
   

    //2
    int n;
    cin >> n;
    int s = 0;
    while (n > 0) 
    {
        if ((n % 10) % 2 != 0)
            s += n % 10;
        n /= 10;
    }
    cout << "Сумма нечетных цифр равна " << s;
}
