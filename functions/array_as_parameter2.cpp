 1 #include <iostream>
 2
 3 using namespace std;
 4
 5 void fun(int A[ ])
 6 {
 7      cout << sizeof(A)/sizeof(int) << endl;
 8 }
 9
10 int main()
11 {
12
13     int A[] = {2,4,6,8,10};
14     int n = 5;
15
16     fun(A);
17
18     for(int x:A)
19         cout << x << " " ;
20
21     return 0;
22 }
