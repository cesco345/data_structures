   #include <cstdio>
 2
 3 int step_function(int x)
 4 {
 5     int result = 0;
 6
 7     if (x < 0)
 8     {
 9         result = -1;
10     } else if (x > 0)
11     {
12         result = 1;
13     }
14         return result;
15 }
16 int main() {
17     int num1 = 42;
18     int result1 = step_function(num1);
19
20     int num2 = 0;
21     int result2 = step_function(num2);
22
23     int num3 = -32767;
24     int result3 = step_function(num3);
25
26     printf("Num1: %d, Step: %d\n", num1, result1);
27     printf("Num2: %d, Step: %d\n", num2, result2);
28     printf("Num3: %d, Step: %d\n", num3, result3);
29
30     return 0;
31 }
