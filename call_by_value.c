 1 #include <stdio.h>
 2 #include <stdlib.h>
 3
 4
 5 add(int a, int b)
 6 {
 7     int c;
 8     c = a + b;
 9
10     return c;
11
12 };
13
14 int main()
15 {
16     int x = 10; int y = 15, sum;
17     sum = add(x, y);
18
19     printf("Sum is:  %d \n", sum);
20     return 0;
21
22 }
