 #include <stdio.h>
 2
 3 int func(int n)
 4 {
 5     static int x =0;
 6     if(n>0)
 7     {
 8         x++;
 9         return func(n-1)+x;
10     }
11     return 0;
12 }
13
14 int main()
15 {
16     int a = 5;
17     printf("%d \n", func(a));
18 }
