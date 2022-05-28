#include<stdio.h>

int main(){
    int day;
    printf("Type the number of the day:\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1: printf("Mnad"); break;
    case 2: printf("Tuesday"); break;
    case 3: printf("Wednesday"); break;
    case 4: printf("Tuesday"); break;
    case 5: printf("Friday"); break;
    case 6: printf("Saturday"); break;
    case 7: printf("Sunday"); break;
    
    default: printf("enter valid number...");
    }
}