#include<stdio.h>

union unionJob
{
    //deffining union
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob)); //32
   printf("\nsize of structure = %d bytes", sizeof(sJob)); // 40
   return 0;
}