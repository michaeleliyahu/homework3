#ifndef _array_h
#define _array_h
#define length 5
#define length2 50
#define LINE 256
#define WORD 30
extern int ARR [length] ;
extern int ARR2 [length2];
void shift_element(int *arr, int i);
void insertion_sort(int *arr, int len);
int print_line(char str[]);
void print_similar_words(char *str);

#endif