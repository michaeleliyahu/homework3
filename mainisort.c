#include <stdio.h>
#include <stdbool.h>
#include "array.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int ARR[length];
int ARR2[length2];
int main()
{
    int input = 0;
    int counter = 0;
    do
    {
        scanf("%d", &input);
        ARR2[counter] = input;
        counter++;
    } while (counter < length2);

    printf("\n\n");
    for (int f = 0; f < length2; f++)
    {
        printf("%d , ", ARR2[f]);
    }

    int *P = &ARR2[0];
    insertion_sort(P, length2);

    printf("\n\n");
    for (int f = 0; f < length2; f++)
    {
        printf("%d , ", ARR2[f]);
    }
}