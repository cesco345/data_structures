  1 #include <stdio.h>
  2 
  3 int sum(int n)
  4 {
  5     if(n==0)
  6         return 0;
  7     return sum(n-1) + n;
  8 }
  9 int Isum(int n)
 10 {
 11     int s=0, i;
 12     for(i=1; i<=n; i++)
 13         s=s+i;
 14     return s;
 15 }
 16 int main()
 17 {
 18     int r =sum(5);
 19     printf("%d ", r);
 20 
 21     return 0;
 22 
 23 }
