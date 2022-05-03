// #include<stdio.h>
// int main()
// {
// int n=2147483647;
// printf("n+1 : %d\n", n+1);
// return 0;
// }
// // n+1 : -2147483648

#include<stdio.h>
int main()
{
float a=1.0e-5, b=1.0e+5, c;
c=a+b;
printf("%e + %e = %e\n", a, b, c);
return 0;
}