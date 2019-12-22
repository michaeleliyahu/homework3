#include <stdio.h>
#include <stdbool.h>
#include "isort.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int ARR[length];
int ARR2[length2];
void shift_element(int *arr, int i)
{
    // printf("arr+i = %d\n\n", *(arr + i));
    // printf("arr+i-1 = %d\n\n", *(arr + i - 1));
    int *g = (int *)(&ARR + 1) - 1;
    //  printf("*g = %p     %d\n", &g, *g);
    int f = *(arr + i);
    if ((arr + i) > g)
    {
        printf("not enath space in arr");
    }
    else
    {
        while (i >= 0)
        {
            *(arr + i) = *(arr + i - 1);
            i--;
        }
        *(arr) = f;
    }
}
void insertion_sort(int *arr, int len)
{
    int i = 1;
    while (i < length2)
    {
        int f = 1;
        // printf("    I : %d     F : %d" , i , f);
        while (i != 1 && (f <= i) && (*(arr + i) < *(arr + i - f)))
        {
            f++;
        }
        //   printf("    I : %d     F : %d\n" , i , f);
        if ((f > 1) && i != 1)
        {
            shift_element((arr + i - (f - 1)), (f - 1));
        }
        if (i == 1)
        {
            shift_element((arr + i - f), f - i + 1);
        }
        // for (int f = 0; f < length2; f++)
        // {
        //     printf("%d ,", ARR2[f]);
        // }
        i++;
    }
}