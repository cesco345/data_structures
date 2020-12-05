 1 #include <iostream>
 2
 3 using namespace std;
 4
 5 int * fun(int size)
 6 {
 7     int *p;
 8     p = new int[size];
 9
10     for(int i = 0; i < size; i++)
11         p[i] = i+1;
12
13         return p;
14 }
15
16 int main()
17 {
18
19     int *ptr, sz = 7;
20
21     ptr = fun(sz);
22
23     for(int i=0; i < sz; i++)
24         cout << ptr[i] << endl;
25     return 0;
26 }
