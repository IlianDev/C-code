#include<stdio.h>

union car
{
    char name[50];
    int price;
};

// union car
// {
//   char name[50];
//   int price;
// } car1, car2, *car3;


int main()
{
    union car car1, car2, *car3;
    return 0;
}

