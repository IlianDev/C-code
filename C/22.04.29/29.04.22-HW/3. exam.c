#include<stdio.h>

int main()
{   
    printf("Prices per day:");
    int price_of_caravans;
    price_of_caravans = 90; 
    int price_of_camper;
    price_of_camper = 100; 

    char vehicle;
    printf("What type of vehicle do you want: ");
    scanf("%c", &vehicle);
    

    int days;
    printf("How many days do you want to use it: ");
    scanf("%d", &days);

    int money;
    if (vehicle == "caravan"){
        money = money+(price_of_caravans*days);
        printf("You need to pay: %d", money);
    }
    else{
        money = money+(price_of_camper*days);
        printf("You need to pay: %d", money);
    }
    return 0;

}