/*
търси един низ за първото появяване на някой от символи във втори низ
Функцията strcspn() започва да търси от първия знак на str1, като търси някой от
отделните символи, съдържащи се в str2.
Функцията не търси низа str2, а само символите, които съдържа.
Ако функцията намери съвпадение, тя връща отместването от началото на str1,
където се намира съответстващият символ.
Ако не намери съвпадение, strcspn() връща стойността на strlen(str1).
Това показва, че първото съвпадение е нулевият символ, с който завършва низа
*/

#include <stdio.h>
#include <string.h>
int main()
{
  char s1[ ]= "HelloBlogsdope"; 
  char s2[ ] = "lo";
  int i = strcspn(s1, s2);
  printf("The first character is matched at %d\n", i+1); // The first character is matched at 3
  return 0;
}