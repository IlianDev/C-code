#include <stdio.h>

int main(){
    char c,d;
    printf("Enter two chars:");
    scanf("%c", &c);
    scanf("%c", &d);
    scanf("&c..%c\n", c,d);
    return 0;
}
