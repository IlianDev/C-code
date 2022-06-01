#include<stdio.h>
#include<stdlib.h>

// declare functions

int fnPlus(int A, int B) {return (A + B);}
int fnMinus(int A, int B) {return(A - B);}
int fnMultiply(int A, int B) {return (A * B);}
int fnDivide(int A, int B) {return (A / B);}

int main()
{
    int choice = 0, A = 0, B = 0;

    // declare pointer with four functions
    int (*pfCalc[4]) (int, int) = {fnPlus, fnMinus, fnMultiply, fnDivide};

    printf("Choose from the following options: \n");
    printf("1 - Add\t 2- Substract\t 3 - Multiply\t 4 - Divide\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter pair of numbers: \n");
        scanf("%d", &A);
        scanf("%d", &B);

        printf("Result is %d\n", (pfCalc[0](A, B)));
        break;
    
    case 2:
        printf("Enter pair of numbers:\n");
        scanf("%d", &A);
        scanf("%d", &B);

        printf("Result is: %d\n", (pfCalc[1](A, B)));
        break;

    case 3:
        printf("Enter pair of numbers: \n");
        scanf("%d", &A);
        scanf("%d", &B);

        printf("Result is: %d\n", (pfCalc[2](A, B)));
        break;

    case 4:
        printf("Enter pair of numbers: \n");
        scanf("%d", &A);
        scanf("%d", &B);

        printf("Result is: %d\n", (pfCalc[3](A, B)));
        break;

    default:
        printf("Choose another option :)");
        break;
    }

    return 0;
}