#include <stdio.h>
int main(void){
int x = 1;
int y = 2;
char t = 0, f = 0;
t = x < y; // 1 T
f = x > y;
printf("True = %d\n", y > x); // True = 1
printf("True = %d\n", t); // True = 1
printf("False = %d\n", f); // False = 0
y = 0;
f = x && y;
printf("----------\n");
printf("False && %d\n", f); //False && 0
t = x || y;
printf("t || %d\n", t); // t || 1
y = x + 2 * 3;
printf("y = %d\n", y); // y = 7
y = (x + 2) * 3;
printf("y = %d\n", y); // y = 9
return 0;
}
