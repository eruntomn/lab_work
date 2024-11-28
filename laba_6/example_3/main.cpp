#include <iostream>
#include <climits>

//Var 4
int main()
{
	//3
	std::cout << "Введите размеры матрицы: ";
	int n, m;
	std::cin >> n >> m;
	int A[100][100];

	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++)
		{
			std::cin >> A[i][j];
		}
	
	int mn = INT_MAX;
	int num_str = -1;
	for(int i = 0; i < n; i++) 
	{
		int s = 0;
		for(int j = 0; j < m; j++) 
		{
			s += A[i][j];
		}
		if (s < mn) {
			mn = s;
			num_str = i; 
		}
	}
	std::cout << std::endl;
	std::cout << "Результат: " << std::endl;
	for (int x = 0; x < n; x++) {
		for(int y = 0; y < m; y++)
		{
			if ((x) == num_str) std::cout << mn << " ";
			else std::cout << A[x][y] << " ";
		}
		std::cout << std::endl;
	}
}
