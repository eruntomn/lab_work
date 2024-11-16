#include <iostream>
#include <climits>

int square(int a) 
{
	return a * a;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
		std::cout << i << " в квадрате равно " square(i) << std::endl;;
}