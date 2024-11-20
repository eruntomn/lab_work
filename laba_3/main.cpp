
#include <iostream>
#include <iomanip>
// var 4
using namespace std;
int main()
{
	cout << "Введите x и i-тый бит числа " << endl;
	unsigned int x, i;
	cin >> x >> i;
	if ((x & (1 << i)) == 0) cout << "i-тый бит числа равен 0";
	else cout << "i-тый бит числа равен 1";
}
