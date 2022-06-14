#include<stdio.h>
#include<string.h>

struct car_info { 
    char make [100];
    char model [100];
    int engine;
    char colour[100];
};

int main(){
    struct car_info info;
    printf("Car make: \n");
    gets(info.make);

    printf("Model: \n");
    gets(info.model);

    printf("Engine: \n"); 
    scanf("%d", &info.engine);

    printf("Colour: \n");
    scanf("%s", &info.colour);


    printf("Car make: %s \n", info.make);
    printf("Model: %s \n", info.model);
    printf("Engine: %d \n", info.engine);
    printf("Colour: %s \n", info.colour);
}

