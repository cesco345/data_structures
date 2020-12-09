  1 #include <stdio.h>
  2 
  3 int func(int n)
  4 {
  5     if (n > 100)
  6 
  7         return n - 10;
  8     return func(func(n+11));
  9 }
 10 int main()
 11 {
 12     int r;
 13     r = func(95);
 14     printf("%d \n" , r);
 15     return 0;
 16 }
