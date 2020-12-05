 1 #include <stdio.h>
 2 #include <stdlib.h>
 3
 4
 5 struct Rectangle
 6 {
 7     int length;
 8     int width;
 9 };
10
11 int area(struct Rectangle r1)
12 {
13     return r1.length * r1.width;
14 }
15
16 int main()
17 {
18     struct Rectangle r = {10,5};
19
20     printf( "The area of the rectangle is %d\n", area(r));
21
22     return 0;
23
24 }
