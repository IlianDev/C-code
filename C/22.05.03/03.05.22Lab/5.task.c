#include<stdio.h>

int main()
{
    int marks;
    printf("Input makrks:\n")
    scanf("%d", &marks);

    if (marks>=0.9){
        printf("Grade A");
    }
    else if (marks>=0.8)
    {
        printf("Grade B");
    }
    else if (marks >=0.7)
    {
        printf("Grade C")
    }
    else if (marks >= 0.6)
    {
        printf("Grade D")
    }
    else if (marks >= 0.4)
    {
        printf("Grade E")
    }
    else
    {
        printf("Grade F")
    }
    return 0;
    
    
    
    
}