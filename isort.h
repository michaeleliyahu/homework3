#ifndef _isort_h
#define _isort_h
#define length 5
#define length2 50
#define LINE 256
#define WORD 30
extern int ARR [length] ;
extern int ARR2 [length2];
void shift_element(int *arr, int i);
void insertion_sort(int *arr, int len);

#endif