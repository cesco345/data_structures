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
11 void changelength(struct Rectangle *p, int l)
12 {
13     p -> length = l;
14 }
15
16 int main()
17 {
18     struct Rectangle r = {10,5};
19
20     changelength(&r, 20);
21
22     return 0;
23
24 }
