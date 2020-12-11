 1  1 #include <stdio.h>
  2 
  3 double e(int x, int n)
  4 {
  5    static double s=1;
  6    int i;
  7    double num=1;
  8    double den=1;
  9    for(i=1; i<=n; i++)
 10    {
 11        num*=x;
 12        den*=i;
 13        s+=num/den;
 14    }
 15    return s;
 16 }
 17 int main()
 18 {
 19     printf("%lf \n", e(1, 10));
 20     return 0;
 21 }
