#include "algorithms.h"



// Ahmed Hussein sadeq.       Ashbenlolo


/* if arr larger than 1,
*/
void MergeSort (unsigned int arr[], int n){
    if(n > 1){
        unsigned int left[n/2] , right[n/2];
        for (int i = 0 ; i < n/2 - 1 ; i++){
            left[i] = arr[i];
        }

        for (int i = n/2 ; i < n ; i ++)
        {
            right[i - n] = arr[i];

        }
        MergeSort(left, n/2);
        MergeSort(right,n/2);

        merge (left, right , arr, n);

    }
}


void merge (unsigned int b[], unsigned int c[], unsigned int a[], int n ){

    int i = 0 , j = 0 , k = 0, pq = n/2;
    while (i < pq  || i < pq ) {
        if (b[i] <= c[j]){
            a[k] = b[i];
            i++; 
            
        }
        else {
            a[k] = c[j];
            j++;
            

        }
        k++;

    }

    if (i == pq) {
        while (j != pq)
        {
            a[k] = c[j];
            k++;
            j++;
        }
        

    }

    else {
        while(i != pq){
            a[k] = b[i];
            k++;
            i++;
        }
    }


}

