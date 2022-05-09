#include<stdio.h>
#include<stbool.h>
int mian()
{
    double tomatoes;
    tomatoes = 4.5;

    double floor;
    floor = 1.8;


    double yogurt;
    yogurt = 0.5;

    double icecream;
    icecream = 0.6;

    double candyes;
    candyes = 1.5;

    double lollipop;
    lollipop = 0.15;

    while (true)
    {
        char product;
        printf("Select your product:");
        scanf("%c", &product);

        double payed_sum;  
        if (product=="tomatoes"){
            payed_sum += tomatoes;
        }
        else if (product=="floor"){
            payed_sum += tomatoes;
        }
        else if (product=="yogurt"){
            payed_sum += yogurt;       
        }
        else if (product=="icecream"){
            payed_sum += icecream;       
        }
        else if (product=="candyes"){
            payed_sum += candyes;       
        }
        else if (product=="lollipop"){
            payed_sum += lollipop;       
        }
}