
#include <iostream>
#include <iomanip>
// var 4
using namespace std;
int main()
{
	cout << "Введите x и i-тый бит числа " << endl;
	int x, i;
	cin >> x >> i;
	cout << (x | (1 << i)) << endl;

}
