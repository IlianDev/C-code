// сравнява лексикографски s и t,
// връща
// число <0 ако s < t,
// число >0 ако s > t,
// нула, ако s и t са идентични 

#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
  int result;

  // comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result); //strcmp(str1, str2) = 1

  // comparing strings str1 and str3
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result); // strcmp(str1, str3) = 0

  return 0;
}

