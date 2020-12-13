GNU nano 4.8                                             enum_with_switch_case.cpp
 1 #include <cstdio>
 2 enum class Race
 3 {
 4     Dinan,
 5     Teklan,
 6     Ivyn,
 7     Moiran,
 8     Camite,
 9     Julian,
10     Aidan
11 };
12
13 int main()
14 {
15     Race race = Race::Ivyn;
16     switch(race)
17     {
18     case Race::Dinan:
19     {
20         printf("You work hard.");
21     } break;
22     case Race::Teklan:
23     {
24         printf("You are very strong.");
25     } break;
26     case Race::Ivyn:
27     {
28         printf("You are a great leader.");
29         break;
30     case Race::Moiran:
31     {
32         printf("My, how versatile you are!");
33     } break;
34     case Race::Camite:
35     {
36         printf("You're incredibly helpful.");
37     } break;
38     case Race::Julian:
39     {
40         printf("Anything you want!");
41     } break;
42     case Race::Aidan:
43     {
44         printf("What an enigma.");
45     } break;
46     default:
47     {
48         printf("Error: unknown race!");
49     }
50 }
51 }
52 }
