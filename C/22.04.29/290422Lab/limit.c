#include<stdio.h>
#include<limits.h>

#include<float.h>
int main(){
    //limits
    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("SHORT INT = %d Bytes\n", sizeof(short));
    //float
    printf("The maximum value of float = %.10e\n", FLT_MAX);
    printf("The min value of float = %.10e\n", FLT_MIN);

    return 0;
}

//The minimum value of INT = -2147483648
// The maximum value of INT = 2147483647 

// The maximum value of float = 3.4028234664e+38
// The min value of float = 1.1754943508e-38