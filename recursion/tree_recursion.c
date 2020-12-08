  1 #include <stdio.h>
  2 
  3 void func(int n)
  4 {
  5     if(n>0)
  6     {
  7         printf("%d ", n);
  8         func(n-1);
  9         func(n-1);
 10     }
 11 
 12 }
 13 
 14 int main()
 15 {
 16     func(3);
 17     return 0;
 18 }
