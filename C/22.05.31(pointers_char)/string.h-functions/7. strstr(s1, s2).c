// strstr(s1, s2)  намира първото появяване на низа s2 в низа s1.

#include <stdio.h>
#include <string.h>
int main()
{
  char s1[ ]= "HelloBlogsdope"; 
  char s2[ ] = "Blog";
  char *p;
  p = strstr(s1, s2);
  printf("%s\n", p); //Blogsdope
  return 0;
}