 1 #include <cstdio>
 2
 3 struct Element {
 4   Element* next{};
 5   void insert_after(Element* new_element) {
 6     new_element->next = next;
 7     next = new_element;
 8   }
 9   char prefix[2];
10   short operating_number;
11 };
12
13 int main() {
14   Element trooper1, trooper2, trooper3;
15   trooper1.prefix[0] = 'T';
16   trooper1.prefix[1] = 'K';
17   trooper1.operating_number = 421;
18   trooper1.insert_after(&trooper2);
19   trooper2.prefix[0] = 'F';
20   trooper2.prefix[1] = 'N';
21   trooper2.operating_number = 2187;
22   trooper2.insert_after(&trooper3);
23   trooper3.prefix[0] = 'L';
24   trooper3.prefix[1] = 'S';
25   trooper3.operating_number = 005;
26
27   for(Element* cursor = &trooper1; cursor; cursor = cursor->next) {
28     printf("Storm Trooper %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
29   }
30 }
