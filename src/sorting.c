#include "sorting.h"


void SelectionSort(unsigned int *arr, int n){

    int i, j;
    int min,temp;

    for(i=0; i<n-1; i++){

        min = i;

        for(j=i+1; j<n; j++){

            if(arr[j]<arr[min]){

                min = j;

            }
        }

        if(min != i){

        temp = (int)arr[i];
        arr[i] = arr[min];
        arr[min] = (unsigned int)temp;

        }
    }
}

void InsertSortOp(unsigned int arr[], int n, int* op)
{
    for (int i = 0; i < n - 1; i++)
    {
        unsigned int v = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > v)
        {
            (*op)++; //Increment the operation counter for each comparison
            arr[j+1] = arr[j];
            j = j - 1;
        }
        // If the while loop is terminated without executing the body, count the comparison as well
        if (j >= 0)
        {
            (*op)++;
        }
        arr[j + 1] = v;
    }
}

void MergeSortOp(unsigned int arr[], int n, int* op)
{
    if(n > 1)
    {
        unsigned int left[n/2] , right[n/2];
        for (int i = 0 ; i < n/2 - 1 ; i++)
        {
            left[i] = arr[i];
        }

        for (int i = n/2 ; i < n ; i ++)
        {
            right[i - n] = arr[i];

        }
        MergeSortOp(left, n/2, op);
        MergeSortOp(right,n/2, op);

        mergeOp (left, right , arr, n, op);

    }
}


void mergeOp (unsigned int b[], unsigned int c[], unsigned int a[], int n,int *op)
{

    int i = 0 , j = 0 , k = 0, pq = n/2;
    while (i < pq  || i < pq ) 
    {
        (*op)++;  // Increment the operation counter for each comparison
        if (b[i] <= c[j])
        {
            a[k] = b[i];
            i++;   
        }
        else 
        {
            a[k] = c[j];
            j++;
        }
        k++;

    }

    if (i == pq) 
    {
        while (j != pq)
        {
            a[k] = c[j];
            k++;
            j++;
        }
    }

    else 
    {
        while(i != pq)
        {
            a[k] = b[i];
            k++;
            i++;
        }
    }
}
