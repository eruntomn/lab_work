#include <iostream>
#include <cmath>
#include <iomanip>
#include <climits>

using namespace std;

//Var 4

int main()
{
	//2
	const int N_Max = 10000;
	int mas[N_Max];

	cout << "Введите размерность последовательности";

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> mas[i];

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			int mn_I = 9;
			int first_I = mas[i];
			while (first_I > 9)
			{
				int sec_I = first_I % 10;
				if (sec_I < mn_I)
					mn_I = sec_I;
				first_I /= 10;
			}


			int mn_J = 9;
			int first_J = mas[j];
			while (first_J > 9)
			{
				int sec_J = first_J % 10;
				if (sec_J < mn_J)
					mn_J = sec_J;
				first_J /= 10;
			}



			if ((first_I > first_J) ||
				(first_I == first_J && mn_I > mn_J) ||
				(first_I == first_J && mn_I == mn_J && mas[i] > mas[j]))
			{
				int tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
			}

		}

	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
}