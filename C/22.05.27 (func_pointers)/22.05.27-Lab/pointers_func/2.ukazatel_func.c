#include<stdio.h>

double myfunc(double a, int b)
{
    return (a * b);
}
double fnPointerDemo()
{
    double (*ptrfun) (double, int);
    ptrfun = myfunc;
    ptrfun = &myfunc;
    double dValue = (*ptrfun) (4.5, 1);
    return dValue;
}


int main()
{
    printf("result = %f", fnPointerDemo());

}
