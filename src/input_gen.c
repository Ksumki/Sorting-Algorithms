#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input_gen.h"

/*
Ahmed Hussein Sadeq                         

*/
unsigned int* ordered_array (int n) {
    unsigned int* lst = malloc ((size_t)n * sizeof(int));
    

    for (int i = 0 ; i < n  ; i++) {
        lst[i] = (unsigned int)i + 1;

    }
    return lst;

}

unsigned int* rev_ordered_array (int n) {
    unsigned int* lst = malloc ((size_t)n * sizeof(int));
    

    for (int i = 0 ; i < n ; i++) {
        lst[i] = (unsigned int)(n - i);

    }
    return lst;
    
}


unsigned int* mixed_array(int n){
    unsigned int* lst = ordered_array(n);
    time_t t;
    srand((unsigned) time(&t));
    int randoz, randox , temp;
    for (int i = 0 ; i < n  ; i++) {
        randox = rand() % n;
        randoz = rand() % n;
        
        temp = (int)lst[randox];
        lst[randox] = lst[randoz];
        lst[randoz] = (unsigned int)temp;
    }
    return lst;

}

unsigned int* mix4_array (int n){
    time_t t;
    srand((unsigned) time(&t));
    unsigned int* lst = ordered_array(n);
    int factor = n / 50;
    int randoz, randox , temp;
    for (int i = 0 ; i < factor  ; i++) {
        randoz = rand() % n;
        randox = rand() % n;
        temp = (int)lst[randox];
        lst[randox] = lst[randoz];
        lst[randoz] = (unsigned int)temp;
    }
    return lst;
}


unsigned int* generate_input(int n, int input_type) {
    unsigned int *arr = NULL;

    switch (input_type) {
    case 0: // Ordered input
        arr = ordered_array(n);
        break;
    case 1: // Reverse ordered input
        arr = rev_ordered_array(n);
        break;
    case 2: // Randomized input
        arr = mixed_array(n);
        break;
    case 3: // Almost ordered input
        arr = mix4_array(n);
        break;
    }

    return arr;
}
