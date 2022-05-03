#include<stdio.h>

int main()
{
int mesec;
printf("Type number of month here:\n");
scanf("%d", &mesec);

if(mesec==1 || mesec==3 || mesec==5 || mesec==7 || mesec == 8 || mesec == 10 || mesec == 12){
    printf("Month with numnber %d has 31 days", mesec);
}
else if (mesec == 2){
    printf("It is according to the year");
}
else{
    printf("Month with number %d has 30 days", mesec);
}
return 0;
}