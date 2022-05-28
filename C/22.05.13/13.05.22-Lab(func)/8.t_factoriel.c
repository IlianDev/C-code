#include<stdio.h>

long factoriel();

int main(){
    int num;
    printf("Num:");
    scanf("%d", &num);

    printf("%d", factoriel(num));
}

long factoriel(int par){
    long factoriel = 1;
    for (int i = 1; i < par; i++)
    {
        factoriel += factoriel * i;
    }
    return factoriel;
}