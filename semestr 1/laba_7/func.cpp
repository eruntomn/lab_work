#include "func.hpp"
#include <iostream>

namespace sv 
{
    void Read(int mas[100][100])
    {
        for(int i = 0; i < 100; i++)
            for(int j = 0; j < 100; j++)
            std::cin >> mas[i][j];
    }

    void Write(int mas[100][100])
    {
        for(int i = 0; i < 100; i++)
            for(int j = 0; j < 100; j++)
                std::cout << mas[i][j] << " ";
            std::cout << std::endl;
    }
    int minElem(int mas[100][100]) 
    {
        int mn = INT_MAX;
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                if (mas[i][j] < mn) mn = mas[i][j];
        return mn;
    }
    bool isPrime(int n) 
    {
        int x = abs(n);
        if (x < 2) return false;
        for (int i = 2; i <= sqrt(x); i++)
            if (x % i == 0) return false;
        return true;
    }
    bool countPrimes(int mas[100][100]) 
    {
        int count = 0;
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                if (isPrime(mas[i][j]))
                    count += 1;
        if (count >= 2) return true;
        else return false;
    }
    bool CountOfMinElem(int mas[100][100]) {
        int c = 1;
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                if (mas[i][j] == minElem(mas)) c++;
        if (c > 1) return true;
        else return false;
    }
    void edin(int arr[100]) 
    {
        for (int i = 0; i < 100; i++)
            arr[i] = 1;
    }
    void prouz(int mas[100][100], int arr[100])
    {
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                arr[i] *= mas[i][j];
    }
    void SwapOflines(int mas[100][100], int arr[100])
    {
        for (int i = 0; i < 100; i++) {
            if (arr[i + 1] > arr[i]) {
                for (int x = 0; x < 100; x++) {
                    int temp = mas[i][x];
                    mas[i][x] = mas[i + 1][x];
                    mas[i + 1][x] = temp;
                }
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
}
