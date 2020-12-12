 1 #include <iostream>
 2
 3 using namespace std;
 4
 5 int step_function(int x)
 6 {
 7     int result;
 8     if (x < 0)
 9     {
10         int result = -1;
11         cout << x << " is a negative number." << endl;
12     }
13     else if (x > 0)
14     {
15         int result = 1;
16         cout << x << " is a positive number." << endl;
17     }
18     else
19         cout << x << " is not a negative number, or a positive number, it's just zero." << endl;
20     return 0;
21 }
22
23 int main()
24 {
25     step_function(74);
26
27     //system("pause");
28     return 0;
29
30 }
