 1 #include <cstdio>
 2
 3 enum class Operations
 4 {
 5     Subtract,
 6     Add,
 7     Multiply,
 8     Divide
 9 };
10
11 int main()
12 {
13     Operations operation = Operations::Divide;
14
15     switch(operation)
16     {
17
18         case Operations::Subtract:
19         {
20             printf("An example of subtraction is 6-3=3. \n");
21         } break;
22
23         case Operations::Multiply:
24         {
25             printf("An example of multiplication is 5 * 3 + 15.\n");
26         } break;
27
28         case Operations::Add:
29         {
30             printf("An example of addition is 4 + 8 = 12.\n");
31         } break;
32
33         case Operations::Divide:
34         {
35             printf("An example of division is 9 / 3 = 3.\n");
36         } break;
37
38         default:
39         {
40             printf("Error: unknown operation!");
41         }
42     }
43 }
44
