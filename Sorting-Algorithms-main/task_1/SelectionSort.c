#include <stdlib.h>


void SelectionSortOp(unsigned int *arr, int n){

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