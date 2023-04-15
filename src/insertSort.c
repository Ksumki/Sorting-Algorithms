#include <stdio.h>

// GHADI KAHLIL -- Deividas Malaska -- Ahmed Hussein Sadeq



void insertionSort(unsigned int arr[], int n);

int main ()
{
    return 0;
}

void insertionSort(unsigned int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        unsigned int v = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > v)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = v;
    }
}