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
11 void initialize(struct Rectangle *r, int l, int w)
12 {
13     r -> length = l;
14     r -> width  = w;
15 }
16
17 int area(struct Rectangle r)
18 {
19     return r.length * r.width;
20 }
21
22 void changelength(struct Rectangle *r, int l)
23 {
24     r -> length = l;
25 }
26
27 int main()
28 {
29     struct Rectangle r;
30     area(r);
31     changelength(&r, 20);
32
33     return 0;
34
35 }

