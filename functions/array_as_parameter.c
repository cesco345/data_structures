 1 #include <stdio.h>
 2 #include <stdlib.h>
 3
 4 void fun(int A[], int n)
 5 {
 6     A[0]=25;
 7 };
 8
 9 int main()
10 {
11     int A[5] = {2,4,6,8,10};
12     fun(A, 5);
13
14     //printf("Sum is:  %d \n", A[]);
15     return 0;
16
17 }
