 1 #include <iostream>
 2 #include <cmath>
 3 #include <tuple>
 4 #include <string>
 5 #include <string_view>
 6
 7 double func(double arg) {
 8   return pow(arg, 3.0) - 14.0 * arg - 15.9;
 9 }
10
11 double derivative(double x) {
12   return 3 * pow(x, 2.0) - 14.0;
13 }
14
15 double ask_for(std::string_view prompt) {
16   double result;
17   std::cout << prompt << ":\t";
18   std::cin >> result;
19   std::cout << "\n";
20   return result;
21 }
22
23 std::tuple<double, double> calculate_at(double point) {
24   return { func(point), derivative(point) };
25 }
26
27 void print(double root, double value, double deriv) {
28   printf("x: %10.5g\tfn(x): %10.5g\tfn'(x): %10.5g\n", root, value, deriv);
29 }
30
31 int main() {
32   auto epsilon = ask_for("Epsilon");
33   if (epsilon < 0) {
34     std::cerr << "Epsilon cannot be negative.\n";
35     return -1;
36   }
37   auto root = ask_for("Guess");
38   double old_root{};
39   do {
40     auto [x_val, x_deriv] = calculate_at(root);
41     old_root = root;
42     root -= x_val / x_deriv;
43     print(root, x_val, x_deriv);
44   } while (abs(old_root - root) > epsilon);
45   std::cout << "Root: " << root << "\n";
46   return 0;
47 }
