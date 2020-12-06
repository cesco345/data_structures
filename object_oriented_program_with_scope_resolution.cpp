 1 #include <iostream>
 2
 3 using namespace std;
 4
 5 class Arithmetic
 6 {
 7
 8 private:
 9     int a;
10     int b;
11
12 public:
13     Arithmetic(int a, int b);
14     int add();
15     int sub();
16
17 };
18
19     Arithmetic::Arithmetic(int a , int b)
20     {
21         this -> a = a;
22         this -> b = b;
23     }
24
25     int Arithmetic::add()
26     {
27         int c;
28         c = a + b;
29         return c;
30     }
31
32     int Arithmetic::sub()
33     {
34         int c;
35         c = a - b;
36         return c;
37     }
38
39 int main()
40 {
41     //int add, sub;
42     Arithmetic ar(5,4);
43     cout << "Addition: " << ar.add() << endl;
44     cout << "Subtraction: " << ar.sub() << endl;
45     return 0;
46 }
