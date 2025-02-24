#include <iostream>
#include <cmath>

using namespace std;

//var 4

/*Дана строка, состоящая из английских букв, длиной не более 100 символов, 
рассчитать ее длину при помощи рекурсии. 
Не используйте метод length() и функцию strlen()*/

int my_length(string s) 
{
	if (s == "") return 0;
	return my_length(s.substr(1)) + 1; //отрезка
}

int main()
{
	cout << my_length("hello world");
    return 0;
}
