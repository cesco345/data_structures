 1 #include <stdio.h>
 2
 3 struct Calendar {
 4     void add_year()
 5     {
 6         year++;
 7     }
 8     bool set_year(int new_year)
 9     {
10         if (new_year < 2019) return false;
11         year = new_year;
12         return true;
13     }
14     int get_year()
15     {
16         return year;
17     }
18 private:
19     int year;
20 };
21
22 int main()
23 {
24     Calendar calendar ;
25
26     if(!calendar.set_year(2018))
27     {
28     calendar.set_year(2019);
29     }
30     calendar.add_year();
31     printf("year: %d", calendar.get_year());
32 }
