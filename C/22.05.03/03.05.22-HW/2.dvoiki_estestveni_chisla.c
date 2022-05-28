#include<stdio.h>
#include<math.h>

int main()
{
    float n,m,k; //8
    printf("Number:\n");
    scanf("%f", &n);
    do
    {   
        printf("Num1\n");
        scanf("%f", &m);
        printf("Num2\n");
        scanf("%f", &k);
    } while (pow(m,2) + pow(k,2) != n);
        printf("The numbers powered by 2 are %.1f and %.1f = %.1f", m,k,n);
        return 0;
}

// N = M^2 + K^2;
// 8 = 2^2+2^2 
