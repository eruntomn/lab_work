
#include <iostream>
#include <iomanip>
// var 4
using namespace std;
int main()
{
	cout << "Введите x и i-тый бит числа " << endl;
	unsigned int x, i;
	cin >> x >> i;
	cout << "Ответ: " << (x | (1 << i));
}
