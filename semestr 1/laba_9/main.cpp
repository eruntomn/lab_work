#include <iostream>
#include <iomanip>

//Var 4

int main()
{
	//1
	short a;
	std::cin >> a;

	unsigned char *b = (unsigned char *) &a;
	
	for(int i = 0; i < sizeof(a); i++) {
		int c = *(b + i);
		std::cout << std::hex << c << " ";
	}
	return 0;
}