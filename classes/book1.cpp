  GNU nano 4.8                                 book1.cpp
 1 #include <cstdio>
 2
 3 struct Book {
 4     char name[256];
 5     int year;
 6     int pages;
 7     bool hardcover;
 8 };
 9
10 int main() {
11
12     Book siddhartha;
13     siddhartha.pages = 152;
14     printf("Siddartha has %d pages.", siddhartha.pages);
15 }
