#include<stdio.h>

struct distance
{
    int km;
    int m;
    int sm;
};

void sumDistances(struct distance d1, struct distance d2);

int main()
{
    struct distance d1;
    printf("Enter km:\n");
    scanf("%d", &d1.km);
    printf("Enter m:\n");
    scanf("%d", &d1.m);
    printf("Enter sm:\n");
    scanf("%d", &d1.sm);

    struct distance d2;
    printf("Enter km:\n");
    scanf("%d", &d2.km);
    printf("Enter m:\n");
    scanf("%d", &d2.m);
    printf("Enter sm:\n");
    scanf("%d", &d2.sm);

    sumDistances(d1, d2);
}

void sumDistances(struct distance d1, struct distance d2)
{
    int d3sm = d1.sm + d2.sm;
    int smtoM = 0;
    if(d3sm >=100){
        smtoM = d3sm / 100;
        d3sm = d3sm % 100;
    }

    int d3m = d1.m + d2.m + smtoM;
    int mtoKM = 0;
    if(d3m >=1000){
        mtoKM = d3m / 1000;
        d3m = d3m % 1000;
    }
    int d3km = d1.km + d2.km + mtoKM;
    printf("Km = %d M=%d SM = %d", d3km, d3m, d3sm);
}