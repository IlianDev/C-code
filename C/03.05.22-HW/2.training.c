#include<stdio.h>

int main(){

    double days, km, percent, counter_km, added_km, x_km, y_km;

    printf("Days:\n");
    scanf("%lf", &days); // 4 days

    printf("Kilometres first day:\n");
    scanf("%lf", &km) ; // 10 km

    printf("Improvement in percent:\n");
    scanf("%lf", &percent); // 25 %

    printf("How many X km to stop:");
    scanf("%lf", &x_km);

    printf("How many Y km to stop:");
    scanf("%lf", &y_km);



    counter_km = km; // 1: 10, 2: 12.5, 3: 15,625; 4:19.53 
    added_km = 0;
    for (int day = 1; day < days; day++)
    {
        counter_km = (counter_km*percent/100)+ counter_km; // 12
        added_km += counter_km;

        if (added_km >= x_km)
        {
            printf("You've reached maximum km for you: %lf for %d days\n", x_km, day);
        }
        else if (added_km >= y_km)
        {
            printf("%lf is equal to %lf\n", added_km, y_km);
        }
        
    }
    printf("Total km: %lf km for %lf", added_km, days);
    return 0;
}
