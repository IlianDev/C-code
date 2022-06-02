#include <stdio.h>
#include <string.h>
int main()
{
  char s1[ ]= "Hey 123 Blogsdope"; 
  char s2[ ] = "123456790";
  char *p;
  p = strpbrk(s1, s2);
  printf("%s\n", p);
  return 0;
}