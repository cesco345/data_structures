#include <stdio.h>
 2 #include <stdlib.h>
 3
 4
 5 void swap(int *x, int *y)
 6 {
 7     int temp;
 8     temp = *x;
 9     *x = *y;
10     *y=temp;
11 };
12
13 int main()
14 {
15     int a, b;
16
17     a = 10;
18     b = 20;
19
20     swap(&a, &b);
21     printf("The new swapped numbers are:  %d %d \n", a, b);
22     return 0;
23
24 }
