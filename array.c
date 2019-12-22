#include <stdio.h>
#include <stdbool.h>
#include "array.h"
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

int print_line(char str[])
{
    char h = getc(stdin);
    int g = 0;
    while (h != EOF)
    {
        str[g] = h;
        g++;
        h = getc(stdin);
    }

    //  printf("str = %s", str);

    int line = 0;
    int countline = 0;
    while (*(str + line) != '\0')
    {
        if (*(str + line) == '\n')
        {

            countline++;
        }
        line++;
    }
   // printf("countline = %d\n ", countline);

    int i = 0;
    int j = 0;
    int f = 0;
    char matrix[countline][LINE];
    while (j < countline && i < 256 && str[f] != EOF && str[f] != '\0')
    {
        if (str[f] == '\n')
        {
            matrix[j][i] = str[f];
            printf("\n");
            i = 0;
            j++;
        }
        else
        {
            matrix[j][i] = str[f];
            printf("%c", matrix[j][i]);
            i++;
        }
        f++;
    }
    //printf("%c \n", matrix[2][23]);
    //printf("%c", matrix[3][0]);
    int ch = 0;
    while (matrix[0][ch] != ' ')
    {
        ch++;
    }
    char tav = matrix[0][ch + 1];
    char word[ch];
    int k = 0;
    while (k < ch)
    {
        word[k] = matrix[0][k];
        printf("%c", word[k]);
        k++;
    }
    //printf("%d", ch);
    printf("\n%c\n", tav);
    //  printf("%c \n", matrix[2][23]);
    if (tav == 'a')
    {
        int x1 = 1;
        int x2 = 0;
        int counter2 = 0;
        bool haveword = false;
        while (x1 < countline && matrix[x1][x2] != EOF)
        {
            haveword = false;
            x2 = 0;
            int x3 = 0;
            // printf("**");
            while (haveword == false && (matrix[x1][x2] != '\n') && (matrix[x1][x2] != '\0'))
            {
                if (matrix[x1][x2] == ' ')
                {
                    counter2 = 0;
                    x3 = 0;
                }
                if (matrix[x1][x2] == word[x3])
                {
                    counter2++;
                    x3++;
                }
                if (counter2 == (ch))
                {
                    haveword = true;
                    x2 = 0;
                    while (matrix[x1][x2] != '\n' && (matrix[x1][x2] != '\0'))
                    {
                        printf("%c", matrix[x1][x2]);
                        x2++;
                    }
                    // printf("%d",x2);
                    printf("\n");
                    x2--;
                    counter2 = 0;
                }
                x2++;
            }
            x1++;
        }
    }
    if (tav == 'b')
    {
        int x1 = 1;
        int x2 = 0;
        int counter2 = 0;
        while (x1 < countline && matrix[x1][x2] != EOF)
        {
            x2 = 0;
            int x3 = 0;
            // printf("**");
            while ((matrix[x1][x2] != '\n') && (matrix[x1][x2] != '\0'))
            {
                if (matrix[x1][x2] == ' ')
                {
                    counter2 = 0;
                    x3 = 0;
                }
                if (matrix[x1][x2] == word[x3])
                {
                    counter2++;
                    x3++;
                }
                if (counter2 == ch)
                {
                    int start = x2;
                    int end = x2;
                    while (start > 0 && matrix[x1][start - 1] != ' ')
                    {
                        start--;
                    }
                    while (matrix[x1][end] != ' ' && matrix[x1][end] != '\n' && matrix[x1][end] != '\0')
                    {
                        end++;
                    }
                    end++;
                    //printf("\n start = %d ", start);
                    //printf("\n end = %d ", end);
                    if ((end - start - 1) <= ch+1)
                    {
                        //printf("\n start = %d ", (end - start - 1));
                       // printf("\n start = %d ", start);
                       // printf("\n end = %d ", end);
                        while (start +1 < end)
                        {
                            printf("%c", matrix[x1][start]);
                            start++;
                        }
                        printf(", ");
                    }
                    counter2 = 0;
                }
                x2++;
            }
            x1++;
        }
    }
}
