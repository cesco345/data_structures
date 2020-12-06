1 #include <iostream>
 2
 3 using namespace std;
 4
 5 struct Rectangle
 6 {
 7     int length;
 8     int width;
 9 };
10
11 struct Rectangle *fun()
12 {
13     struct Rectangle *p;
14     p = new Rectangle;
15
16     p -> length = 15;
17     p -> width  =  7;
18
19     return p;
20 }
21
22 int main()
23 {
24     struct Rectangle *ptr = fun();
25     cout << "Length: " << ptr -> length << endl << "Width: " << ptr->width <>
26     return 0;
27
28 }
