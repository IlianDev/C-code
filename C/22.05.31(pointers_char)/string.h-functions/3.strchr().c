// strchr(s1, c) returns a pointer to the first occurrence of 
// the character c in the string s1 and returns 
// NULL if the character c is not found in the string s1.

#include <stdio.h>
#include <string.h>
int main()
{
  char s1[ ]= "Hello Blogsdope"; 
  char c = 'B';
  char *p;
  p = strchr(s1, c);
  printf("%s\n", p); // Blogsdope
  return 0;
}