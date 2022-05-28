#include<stdio.h>

void hanoi(int n, char x, char y, char z){
    if (n>0)
    {
        hanoi(n-1, x,z,y);
        printf("\nmove %c ---> %c\n", x,y);
        hanoi(n-1, x,y,x);
    }
    
}

int main(){
    int n =3;
    hanoi(n, 'A','B', 'C');
}