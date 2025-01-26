#include <iostream>
#include <cmath>

using namespace std;

/*Реализуйте быструю сортировку. Изучите, как она работает. 
Сравните скорость работы с сортировкой обменами.*/

//var 4, example 2

void QuickSort(int a, int b, int* arr) 
{
    if(a>=b) return;

    //Выбор опорного элемента
    int m = arr[(a + b) / 2];
    //Пресорт
    int l = a - 1;
    int r = b + 1;
    while(true) {
        do l++; while(arr[l] < m);
        do r--; while(arr[r] > m);
        if(l >= r) break;
        swap(arr[l], arr[r]);
    }
    l = r;
    r++;
    QuickSort(a, l, arr);
    QuickSort(r, b, arr);

}

int main()
{
	const int n = 5;
    int arr[n] = {2, 3, 1, 4, 6};
    QuickSort(0, n-1, arr);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
