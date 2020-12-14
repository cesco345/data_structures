 1 #include <cstdio>
 2
 3 struct Calendar {
 4   Calendar() {
 5     year = 2019;
 6   }
 7   void add_year() {
 8     year++;
 9   }
10   bool set_year(int new_year) {
11     if(new_year < 2019)
12       return false;
13     year = new_year;
14     return true;
15   }
16   int get_year() {
17     return year;
18   }
19
20   private:
21   int year;
22 };
23
24 int main() {
25     Calendar calendar;
26
27     Calendar* calendar_ptr = &calendar;
28     calendar_ptr->set_year(2020);
29
30     printf("Address of calendar year: %p\n", calendar_ptr);
31     printf("What is the year: %d\n", calendar_ptr->get_year());
32 }
33
