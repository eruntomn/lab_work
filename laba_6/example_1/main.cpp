#include <iostream>
#include <cmath>
#include <iomanip>
#include <climits>

using namespace std;

//Var 4

int main()
{
	//1
	const int N_Max = 10000;
	int mas[N_Max];

	cout << "Введите размерность последовательности";

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> mas[i];

	bool flag = true;

	for (int a = 0; a < n; a++)
	{
		int count = 0;
		int ne_prost = false;
		for (int k = 2; k < sqrt(mas[a]) + 1; k++)
		{
			if (mas[a] % k == 0)
				count += 1;
		}
		if (count == 0) ne_prost = true;
		else ne_prost = false;

		if (ne_prost == true)
		{
			flag = false;
			break;
		}
	}

	if (flag == true)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (mas[i] < mas[j])
				{
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
				}
			}

		}
		for (int i = 0; i < n; i++)
			cout << mas[i] << " ";
	}
	else cout << "упс";

}