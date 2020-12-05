  #include <iostream>
 2
 3 using namespace std;
 4
 5 struct Rectangle
 6 {
 7     int length;
 8     int width;
 9 };
10
11 int main()
12 {
13     struct Rectangle *p;
14     p = new Rectangle;
15
16     p->length = 15;
17     p->width = 7;
18
19     cout << "length : " << p->length << endl;
20     cout << "width :  " << p->width << endl;
21
22     return 0;
23
24 }

 
