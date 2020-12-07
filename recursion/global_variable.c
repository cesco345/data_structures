  1 #include <stdio.h>
  2 
  3 int x = 0;
  4 
  5 int fun(int n)
  6 {
  7     if(n>0)
  8     {
  9         x++;
 10         return fun(n-1) + x;
 11     }
 12     return 0;
 13 }
 14 
 15 int main()
 16 {
 17     int r;
 18     r = fun(5);
 19     printf("%d \n", r);
 20     return 0;
 21 }
