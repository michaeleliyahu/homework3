#ifndef _isort_h
#define _isort_h
#define LENGTH 5
#define LENGTH2 50
#define LINE 256
#define WORD 30
extern int ARR [LENGTH] ;
extern int ARR2 [LENGTH2];
void shift_element(int *arr, int i);
void insertion_sort(int *arr, int len);

#endif