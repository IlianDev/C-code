#include<stdio.h>
#include<unistd.h>
#include<string.h>

void toBinary( int a[] ,int number){
    int temp;
    for(int i=0;number>0;i++)    
{    
        a[i]=number%2;    
         number=number/2;    
}
for(int i = 0; i<10/2; i++){
        temp = a[i];
        a[i] = a[10-i-1];
        a[10-i-1] = temp;
    }   
}
void movingLight(int a[]){
char lamps [] ="..........";
    for(int i = 0;i<10;i++){
        if(a[i]==1){

         lamps[i]='*';
        }
        system("cls");
        printf("%s\n",lamps);
        sleep(1);
        lamps[i]='.';   
    }
}

int main(){
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    int a[10];
    toBinary(a,number);
    movingLight(a);
    return 0;
}