#include <stdio.h>
#include <stdlib.h>


int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int fnMult(int nA, int NB) {return(Na * nB); }

int ( * pfCalc ) ( int, int ) = NULL;

int main(){
    char op;
    scanf("%c",&op);
    int a=4;
    int b=9;
    
    if(op=='+'){
        pfCalc =fnPlus(a,b);
        printf("%d", ( * pfCalc ) );
    }
    
    if (op = "*")
    {
        pfCalc = fnMult(a,b);
        printf("%d", (* pfCalc));
    }   
}