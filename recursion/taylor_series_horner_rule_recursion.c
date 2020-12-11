 1 #include <stdio.h>
  2 
  3 double e(int x, int n)
  4 {
  5     static double s;
  6     if (n==0)
  7         return s;
  8     s = 1 + x*s/n;
  9     return e(x, n-1);
 10 }
 11 int main()
 12 {
 13     printf("%lf \n", e(2, 10));
 14     return 0;
 15 
 16 }
