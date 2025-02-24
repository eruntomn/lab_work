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
        int ost = n % 10;
        if (ost == 0 || ost == 7) 
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
}
