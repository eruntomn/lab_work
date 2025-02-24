#include "func.hpp"
// Var 4

using namespace sv;
int main()
{
	int mas[100][100];
	int arr[100];
	edin(arr);
	Read(mas);
	if ((CountOfMinElem(mas) == true) && (countPrimes(mas) == true))
		SwapOflines(mas, arr);
	Write(mas);
}