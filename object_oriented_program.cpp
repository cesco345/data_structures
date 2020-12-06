 1 #include <iostream>
 2
 3 using namespace std;
 4
 5 class Rectangle
 6 {
 7
 8 private:
 9     int length;
10     int width;
11
12 public:
13     Rectangle()  //constructor
14     {
15         length=0;
16         width =0;
17     }
18
19     Rectangle(int l, int w)  // parameterized constructor
20     {
21         length = l;
22         width  = w;
23     }
24
25     int area()    // method
26     {
27         return length * width;
28     }
29
30     int perimeter() // method
31     {
32         return 2 * (length + width);
33     }
34
35     void setLength(int l)
36     {
37         length = l;
38     }
39
40     void setWidth(int w)
41     {
42         width = w;
43     }
44
45     ~Rectangle()
46     {
47         cout << "Destructor";
48
49     }
50
51 };
52 int main()
53 {
54     Rectangle r(10, 5);
55
56     cout << "Area: " << r.area() << endl;
57     cpit << "Perimeter:  " << r.perimeter() << endl;
58     return 0;
59
60 }
