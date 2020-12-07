 #include <stdio.h>
 2
 3 int func(int n)
 4 {
 5     if(n>0)
 6     {
 7         return func(n-1)+n;
 8     }
 9     return 0;
10 }
11
12 int main()
13 {
14     int a = 5;
15     printf("%d ", func(a));
16 }
17
