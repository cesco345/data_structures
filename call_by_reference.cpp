   #include <iostream>
 2
 3 using namespace std;
 4
 5 void swap(int &x, int &y)
 6 {
 7     int temp;
 8     temp = x;
 9     x = y;
10     y=temp;
11 };
12
13 int main()
14 {
15     int a, b;
16
17     a = 10;wap_function
18     b = 20;
19
20     swap(a, b);
21     cout << "The new swapped numbers are: " << a << " and "<< b << endl;
22     return 0;
23
24 }
