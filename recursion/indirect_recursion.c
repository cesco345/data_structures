  1 #include <stdio.h>
  2 
  3 void funcB(int n);
  4 
  5 void funcA(int n)
  6 {
  7     if(n>0)
  8     {
  9         printf("%d ", n);
 10         funcB(n-1);
 11     }
 12 }
 13 
 14 void funcB(int n)
 15 {
 16     if(n>1)
 17     {
 18         printf("%d ", n);
 19         funcA(n/2);
 20     }
 21 }
 22 
 23 int main()
 24 {
 25     funcA(20);
 26     return 0;
 27 }
