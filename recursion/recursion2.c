#include <stdio.h>
 2
 3 void func1(int n)
 4 {
 5     if(n > 0)
 6     {
 7         func1(n-1);
           printf("%d \n", n);
 9     }
10 }
11
12 void main()
13 {
14     int x = 3;
15     func1(x);
16 }
