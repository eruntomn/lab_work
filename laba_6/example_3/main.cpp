#include <iostream>
#include <climits>

//Var 4

int main()
{
	//3
	int matrix[100][100];
	int n, m;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> matrix[i][j];

	int mn = INT_MAX;
	int stroka;
	int s;
	for (int i = 0; i < n; i++)
	{
		s = 0;
		for (int j = 0; j < m; j++)
		{
			s += matrix[i][j];
		}
		if (s < mn) {
			mn = s;
			stroka = i + 1;
		}
	}
	std::cout << stroka << " " << mn << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == stroka - 1) matrix[i][j] = mn;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}