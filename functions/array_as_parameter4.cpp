  GNU nano 4.8                array_as_parameter4.cpp
 1 #include <iostream>
 2
 3 using namespace std;
 4
 5 void fun(int A[ ], int n)
 6 {
 7     for(int i=0; i < n; i++)
 8         cout << A[i] << endl;
 9 }
10
11 int main()
12 {
13
14     int A[] = {2,4,6,8,10};
15     int n = 8;
16
17     fun(A, n);
18
19     for(int x:A)
20         cout << x << " " ;
21
22     return 0;
23 }
