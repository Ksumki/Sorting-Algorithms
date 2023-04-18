#include "input_gen.h"
#include "sorting.h"
#include <stdio.h>

int main()
{
    int x = 53;
    int* lst = mix4_array(x);

    for (int i = 0 ; i < x ; i++) {
        printf(" %d " , lst[i]);
    }
}