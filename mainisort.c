#include <stdio.h>
#include <stdbool.h>
#include "isort.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int ARR[LENGTH];
int ARR2[LENGTH2];
int main()
{
    int input = 0;
    int counter = 0;
    do
    {
        scanf("%d", &input);
        ARR2[counter] = input;
        counter++;
    } while (counter < LENGTH2);

    printf("\n\n");
    for (int f = 0; f < LENGTH2; f++)
    {
        printf("%d , ", ARR2[f]);
    }

    int *P = &ARR2[0];
    insertion_sort(P, LENGTH2);

    printf("\n\n");
    for (int f = 0; f < LENGTH2; f++)
    {
        printf("%d , ", ARR2[f]);
    }
}