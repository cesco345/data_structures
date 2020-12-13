 1 #include <cstddef>
 2 #include <cstdio>
 3
 4 int main() {
 5
 6     size_t size_c = sizeof(char);
 7     printf("char: %zu\n", size_c);
 8
 9     size_t size_s = sizeof(short);
10     printf("short: %zu\n", size_s);
11
12     size_t size_i = sizeof(int);
13     printf("int: %zu\n", size_i);
14
15     size_t size_l = sizeof(long);
16     printf("long: %zu\n", size_l);
17
18     size_t size_ll = sizeof(long long);
19     printf("long long: %zu\n", size_ll);
20 }
