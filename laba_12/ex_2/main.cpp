#include <iostream>
#include <cstdlib>

using namespace std;

int partition(int * A, int left, int right)
{
    int k = left + rand() % (right - left + 1);
    int pivot = A[k];

    int i = left;
    int j = right;

    while (i <= j) {
        while (A[i] < pivot) i++;
        while (A[j] > pivot) j--;
        if (i >= j) break;
        swap(A[i++], A[j--]);
    }

    return j;
}

void quicksort(int * A, int left, int right)
{
    if (left < right) {
        int q = partition(A, left, right);
        quicksort(A, left, q);
        quicksort(A, q + 1, right);
    }
}

int main()
{
    int A[] = {11, 8, 7, 18, 9, 3, 16, 1, 4};
    quicksort(A, 0, 8);

    for (int i = 0; i <= 8; i++) cout << A[i] << " ";

    return 0;
}
