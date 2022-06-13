/*
Задача 3. Напишете програма, която калкулира разликата на
два времеви периода, изразени във векове, години, месеци, дни,
минути, секудни. Принтирайте изходните периоди и резултата.
*/

#include <stdio.h>
struct TIME {
    int centuries;
    int years;
    int days;
    int hours;
    int minutes;
    int seconds;
   
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

int main() {
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time. \n");
   printf("Enter centuries, years, days, hours, minutes, seconds: ");
   scanf("%d %d %d %d %d %d", 
        &startTime.centuries,
        &startTime.years,
        &startTime.days,
        &startTime.hours,
        &startTime.minutes,
        &startTime.seconds);

   printf("Enter the stop time. \n");
   printf("Enter centuries, years, days, hours, minutes, seconds: ");
   scanf("%d %d %d %d %d %d", 
        &stopTime.centuries,
        &stopTime.years,
        &stopTime.days,
        &stopTime.hours,
        &stopTime.minutes,
        &stopTime.seconds);

   // Difference between start and stop time
   differenceBetweenTimePeriod(startTime, stopTime, &diff);

   printf("\nTime Difference: %d %d %d %d %d %d - ", 
        &startTime.centuries,
        &startTime.years,
        &startTime.days,
        &startTime.hours,
        &startTime.minutes,
        &startTime.seconds);

   printf("%d %d %d %d %d %d ", 
        &stopTime.centuries,
        &stopTime.years,
        &stopTime.days,
        &stopTime.hours,
        &stopTime.minutes,
        &stopTime.seconds);

   printf("= %d %d %d %d %d %d\n",
        diff.centuries,
        diff.years,
        diff.days, 
        diff.hours,
        diff.minutes,
        diff.seconds);

   return 0;
}

// difference between time periods
void differenceBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff) 
{
    // centuries
    diff -> centuries = start.centuries - stop.centuries;

    // years
    diff -> years = start.years - stop.years;

    // days
    diff->days = start.days - stop.days;

    // hours
   diff->hours = start.hours - stop.hours;

    // minutes
   while (stop.minutes > start.minutes) {
      --start.hours;
      start.minutes += 60;
   }
    diff->minutes = start.minutes - stop.minutes;


    // seconds
   while (stop.seconds > start.seconds) {
      --start.minutes;
      start.seconds += 60;
   }
   diff->seconds = start.seconds - stop.seconds;

}