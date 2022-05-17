//6. проверява дали едно число е цяло

#include<stdio.h>
#include<stdbool.h>

bool isInteger(float n);

int main()
{
    float n;
    printf("Number:");
    scanf("%f", &n);
    if(isInteger(n)){
        printf("yes");
    }
    else{
        printf("No");
    } 
}

bool isInteger(float n){
    int n2 = (int)n;
    if (n2 == n)
        return true;
    return false;  
}