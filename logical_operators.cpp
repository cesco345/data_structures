 1 #include <cstdio>
 2
 3 int main()
 4 {
 5
 6     bool t = true;
 7     bool f = false;
 8
 9     printf("!true: %d\n", !t);
10     printf("true && false: %d\n", t && f);
11     printf("true && !false: %d\n", t && !f);
12     printf("true || false: %d\n", t || f);
13     printf("false || false: %d\n", f || f);
14
15     return 0;
16 }
17
