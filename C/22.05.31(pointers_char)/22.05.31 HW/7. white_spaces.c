// remove the whiteSpaces

#include <string.h>
void trimleadingandTrailing(char *s)
{
	int  i,j;
 
	for(i=0; s[i]==' ' || s[i]=='\t'; i ++);
		
	for(j=0;s[i];i++)
	{
		s[j++]=s[i];
	}
	s[j]='\0';
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' '&& s[i]!='\t')
				j=i;
	}
	s[j+1]='\0';
}
int main()
{
    char s[1000];  
    
    printf("Enter any string : ");
    gets(s);
    
	printf("Before trimming leading and trailing white spaces :'%s'",s);
	trimleadingandTrailing(s);
    printf("\nAfter trimming leading and trailing white spaces :'%s'",s);
}