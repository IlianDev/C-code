#include<stdio.h>

int main(){
    float earth_weight;
    printf("Type your weight on Earth: ");
    scanf("%f", &earth_weight);
    float moon_gravitation;
    moon_gravitation = earth_weight*0.17;
    printf("Your weight on the moon would be: %.2f kg.", moon_gravitation);
    return 0;
}