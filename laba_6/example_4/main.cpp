#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

//Var 4

int main()
{
	//4
	const int N_Max = 20000;
	int mas[N_Max];

	cout << "Введите размерность последовательности:";

	int n;
	cin >> n;
	
	cout << "Введите последовательность:";

	for (int i = 0; i < n; i++)
		cin >> mas[i];

	for (int i = 0; i < n; )
	{
		int x = mas[i];
		int y = 0;
		while (x > 0)
		{
			y = y * 10 + x % 10;
			x /= 10;
		}
		if (mas[i] == y)
		{
			for (int j = i+1; j < n; j++)
				mas[j-1] = mas[j];
			n--;
		}
		else i++;
	}

	for (int i = 0; i < n; )
	{
		bool flag = true;
		for (int k = 2; k < sqrt(mas[i]) + 1; k++)
		{
			if (mas[i] % k == 0)
			{
				flag = false;
				break;
			}
		}

		if (flag == true)
		{
			for (int j = n; j > i; --j)
				mas[j] = mas[j - 1];
			i+=2;
			n++;
		}
		else i++;
	}
	cout << "Результат: " << endl;
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
}
