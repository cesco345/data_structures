 1 #include <cstdio>
 2
 3 struct Operations {
 4   Operations() {
 5     sum = 1 + 1;
 6   }
 7
 8   int get_sum() {
 9     return sum;
10   }
11
12   private:
13   int sum;
14 };
15
16 int main() {
17   Operations operation;
18   printf("The sum of 1 + 1 = %d\n", operation.get_sum());
19 }
20
