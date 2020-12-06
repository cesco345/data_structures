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
11 void fun(struct Rectangle r)
12
13 {
14     r.length = 20;
15     printf("Length: %d  Width: %d \n" , r.length , r.width);
16 }
17
18 int main()
19 {
20     struct Rectangle r = {10,5};
21     fun(r);
22     printf( "Length %d \nWidth %d\n", r.length, r.width);
23
24     return 0;
25
26 } 1 #include <stdio.h>
 2 #include <stdlib.h>
 3
 4
 5 struct Rectangle
 6 {
 7     int length;
 8     int width;
 9 };
10
11 void fun(struct Rectangle r)
12
13 {
14     r.length = 20;
15     printf("Length: %d  Width: %d \n" , r.length , r.width);
16 }
17
18 int main()
19 {
20     struct Rectangle r = {10,5};
21     fun(r);
22     printf( "Length %d \nWidth %d\n", r.length, r.width);
23
24     return 0;
25
26 }

