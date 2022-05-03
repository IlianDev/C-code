#include<stdio.h>
int main(){
    int count = 10, *cp;
    cp = &count; 
    printf("Shows the value, using *: %d\n", *cp);
    printf("Shows the adress in the storage: %d", cp);
}
// tozi pointer shte cochi kym tozi adres., moje da sochi i kym stojnostta 
// Shows the value, using *: 10
// Shows the adress in the storage: 2038429412