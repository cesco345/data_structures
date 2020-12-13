1 #include <cstdio>
 2
 3 int main()
 4 {
 5     unsigned long maximum = 0;
 6     unsigned long values[] = { 10, 50, 20, 40, 0 };
 7
 8     for(unsigned long value : values) {
 9         if (value > maximum) maximum = value;
10     }
11     printf("The maximum value is %lu.\n", maximum);
12 }
