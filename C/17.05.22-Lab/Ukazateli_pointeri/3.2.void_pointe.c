#include<stdio.h>
int main()
{
   int a = 2;
   char c = 'a';

   void *ptr; // указател към неопределен тип

   ptr = &a;
   int *temp = (int *)ptr; // указател темп ще сочи там където е ptr, но след като е кастнат 
   printf("After typecasting, a = %d\n", *temp); // After typecasting, a = 2

   ptr = &c;
   char *t = (char *)ptr;
    printf("After typecasting, a = %c\n", *t); // After typecasting, a = a


   return 0;
}
// (int *) - превежда се указател към int  
// *(int *)ptr - кастнат указател, като му сложим *, става неговата стойност

// Ако не го кастнем - 
