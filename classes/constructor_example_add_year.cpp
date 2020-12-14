 1 #include <cstdio>
 2
 3 struct Calendar {
 4   Calendar(int year_in) {
 5     if(!set_year(year_in)) {
 6       year = 2019;
 7     }
 8   }
 9   Calendar() {
10     year = 2019;
11   }
12   void add_year() {
13     year++;
14   }
15   bool set_year(int new_year) {
16     if(new_year < 2019)
17       return false;
18     year = new_year;
19     return true;
20   }
21   int get_year() {
22     return year;
23   }
24
25   private:
26   int year;
27 };
28
29 int main() {
30   Calendar calendar{ 2020 };
31   printf("Year: %d \n", calendar.get_year());
32 }
