#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Var 4

int main() 
{
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
