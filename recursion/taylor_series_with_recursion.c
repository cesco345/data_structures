  1 #include <stdio.h>
  2 
  3 double e(int x, int n)
  4 {
  5     static double p=1, f=1;
  6     double r;
  7 
  8     if(n==0)
  9         return 1;
 10     r = e(x, n-1);
 11     p = p * x;
 12     f = f * n;
 13     return r + p / f;
 14 }
 15   
 16 int main()
 17 {
 18     printf("%lf \n", e(1,10));
 19     return 0;
 20 
 21 }
