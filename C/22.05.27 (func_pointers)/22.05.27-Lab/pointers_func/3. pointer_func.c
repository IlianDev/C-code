include <stdio.h>
#include <stdlib.h>
 
//деклариране на функциите
 
int fnPlus(int nA, int nB){
    return(nA + nB);
    }
 
int fnMinus(int nA, int nB){
    return(nA - nB); 
    }
 
int fnMultiply(int nA, int nB){
    return(nA * nB);
}
 
int fnDivide(int nA, int nB){
    return(nA / nB);
}
 
int main(){
    int choice = 0, A = 0, B = 0;
 
    //пойнтер към масив с 4 функции
    int (*pfCalc[4])(int, int) = {&fnPlus, &fnMinus, &fnMultiply, &fnDivide}; 
 
    printf("Please choose from the following options: \n");
    printf("1 - Add; 2 - Subtract; 3 - Multiply; 4 - Divide\n");
    scanf("%d", &choice);
 
    switch(choice){
 
        case 1:
            printf("Please enter a pair of numbers:\n");
            scanf("%d", &A);
            scanf("%d", &B);
 
            printf("Result is %d\n", (pfCalc[0](A, B)));
            break;
 
        case 2:
            printf("Please enter a pair of numbers:\n");
            scanf("%d", &A);
            scanf("%d", &B);
 
            printf("Result is %d\n", (pfCalc[1](A, B)));
            break;
 
        case 3:
            printf("Please enter a pair of numbers:\n");
            scanf("%d", &A);
            scanf("%d", &B);
 
            printf("Result is %d\n", (pfCalc[2](A, B)));
            break;
 
        case 4:
            printf("Please enter a pair of numbers:\n");
            scanf("%d", &A);
            scanf("%d", &B);
 
            printf("Result is %d\n", (pfCalc[3](A, B)));
            break;
 
        default:
            printf("Please start the program again and choose another option.\n");
            break;
    }
 
    return 0;
}