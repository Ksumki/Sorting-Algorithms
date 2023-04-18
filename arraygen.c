#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Ahmed Hussein Sadeq                         

*/
int* ordered_array (int n) ;
int* rev_ordered_array (int n); 
int* mixed_array(int n);
int* mix4_array (int n);
int main(int argc, char const *argv[])
{
    int x = 53;
    int* lst = mix4_array(x);

    for (int i = 0 ; i < x ; i++) {
        printf(" %d " , lst[i]);
    }
}


int* ordered_array (int n) {
    int* lst = malloc (n * sizeof(int));
    

    for (int i = 0 ; i < n  ; i++) {
        lst[i] = i + 1;

    }
    return lst;

}

int* rev_ordered_array (int n) {
    int* lst = malloc (n * sizeof(int));
    

    for (int i = 0 ; i < n ; i++) {
        lst[i] = n - i;

    }
    return lst;
    
}


int* mixed_array(int n){
    int* lst = ordered_array(n);
    time_t t;
    srand((unsigned) time(&t));
    int randoz, randox , temp;
    for (int i = 0 ; i < n  ; i++) {
        randoz = rand() % n;
        
        temp = lst[randox];
        lst[randox] = lst[randoz];
        lst[randoz] = temp;
    }
    return lst;

}

int* mix4_array (int n){
    time_t t;
    srand((unsigned) time(&t));
    int* lst = ordered_array(n);
    int factor = n / 50;
    int randoz, randox , temp;
    for (int i = 0 ; i < factor  ; i++) {
        randoz = rand() % n;
        randox = rand() % n;
        temp = lst[randox];
        lst[randox] = lst[randoz];
        lst[randoz] = temp;
    }
    return lst;
}