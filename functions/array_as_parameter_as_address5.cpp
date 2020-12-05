 #include <iostream>
 2
 3 using namespace std;
 4
 5 void fun(int *A, int n)
 6 {
 7     A[0] = 15;
 8 }
 9
10 int main()
11 {
12
13     int A[] = {2,4,6,8,10};
14     int n = 8;
15
16     fun(A, n);
17
18     for(int x:A)
19         cout << x << " " ;
20
21     return 0;
22 }
 #include <iostream>
 2
 3 using namespace std;
 4
 5 void fun(int *A, int n)
 6 {
 7     A[0] = 15;
 8 }
 9
10 int main()
11 {
12
13     int A[] = {2,4,6,8,10};
14     int n = 8;
15
16     fun(A, n);
17
18     for(int x:A)
19         cout << x << " " ;
20
21     return 0;
22 }
