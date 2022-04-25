#include <stdio.h>

int main(){
    int product;
    printf("choose you drink\n");
    scanf("%d",&product);
    
    switch (product){
        case 1:
        printf("making coffee");
        break;
        case 2:
        printf("making capuccino");
    }

    return 0;
}