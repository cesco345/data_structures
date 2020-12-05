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
11 int main()
12 {
13     struct Rectangle *p;
14     p =  (struct Rectangle *)malloc(sizeof(struct Rectangle));
15
16     p -> length = 15;
17     p ->  width = 7;
18
19     printf( "length : %d\n", p-> length);
20     printf( "width : %d\n", p -> width);
21
22     return 0;
23
24 }
