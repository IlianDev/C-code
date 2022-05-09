#include<stdio.h>

int mian(){
    //ceonstat
    int earth_days = 365;
    int jupiter_days = 4380;
    int earth = 1;
    int jupiter = 12;


    int earth_days_input;
    printf("Type Earth days here: ");
    scanf("%d",&earth_days_input);
    
    int day_per_Eath_year;
    day_per_Eath_year = earth_days/earth_days_input;
    int jupiter_year_per_earth_day;
    jupiter_year_per_earth_day = day_per_Eath_year/jupiter;
    printf("The given days on Earth are - %d years on Jupiter.",jupiter_year_per_earth_day);
    return 0;
}