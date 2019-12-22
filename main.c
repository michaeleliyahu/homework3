#include <stdio.h>
#include <stdbool.h>
#include "array.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int ARR[length];
int ARR2[length2];
/*
this is a text file
looking for the word cat
the program should print also cats
after cats crat and lcat are printed
the program shouldn't print
the word caats
*/
int main()
{
    int get_line=0;
    char alltext[LINE];
    get_line = print_line(alltext);
    //       printf("im heere");
    // char word[] = "this is a text file\nlooking for the word cat\nthe program should print also cats\nafter cats crat and lcat are printed\nthe program shouldn't print\nthe word caats";
    // char *k = &word[0];

    // printline(k);
    return 0;
    //     int i = 3;
    //     for (int f = 0; f < length; f++)
    //     {
    //         ARR[f] = f;
    //         printf("%d , ", ARR[f]);
    //     }

    // int *p = &ARR[1];
    //     printf("\n\n");
    //     shift_element(p, i);
    //     printf("\n\n");
    //     for (int f = 0; f < length; f++)
    //     {
    //         printf("%d , ", ARR[f]);
    //     }

    ///////ex2
    // int input = 0;
    // int counter = 0;
    // do
    // {
    //     scanf("%d", &input);
    //     ARR2[counter]=input;
    //     counter++;
    // }
    // while (counter< length2);

    // printf("\n\n");
    // for (int f = 0; f < length2; f++)
    // {
    //     printf("%d , ", ARR2[f]);
    // }

    // int *P = &ARR2[0];
    // insertion_sort(P, length2);

    // printf("\n\n");
    // for (int f = 0; f < length2; f++)
    // {
    //     printf("%d , ", ARR2[f]);
    // }
}