#include<stdio.h>

int main()
{
    int marks;
    printf("Input makrks:\n");
    scanf("%d", &marks);

    if (marks >= 0.4)
    {
        printf("Grade E\n");
    }
    else if (marks >= 0.6)
    {
        printf("Grade D\n");
    }
    else if (marks >=0.7)
    {
        printf("Grade C\n");
    }
    else if (marks>=0.8)
    {
        printf("Grade B\n");
    }
    else if (marks>=0.9){
        printf("Grade A\n");
    }
    else{
        printf("Grade F\n");
    }
    return 0;

}