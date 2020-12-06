 1 #include <iostream>
 2
 3 using namespace std;
 4
 5 template<class T>
 6 class Arithmetic
 7 {
 8 private:
 9     T a;
10     T b;
11
12 public:
13     Arithmetic(T a, T b);
14     T add();
15     T sub();
16
17 };
18     template<class T>
19     Arithmetic<T>::Arithmetic(T a , T b)
20     {
21         this -> a = a;
22         this -> b = b;
23     }
24
25     template<class T>
26     T Arithmetic<T>::add()
27     {
28         T c;
29         c = a + b;
30         return c;
31     }
32
33     template<class T>
34     T Arithmetic<T>::sub()
35     {
36         T c;
37         c = a - b;
38         return c;
39     }
40
41 int main()
42 {
43     //Arithmetic <int> ar(5,4);
44     Arithmetic <float> ar(53.7,4.89);
45     cout << "Addition: " << ar.add() << endl;
46     cout << "Subtraction: " << ar.sub() << endl;
47     return 0;
48 }
