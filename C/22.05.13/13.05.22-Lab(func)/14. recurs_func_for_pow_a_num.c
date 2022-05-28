// функция за пождигане на число на степен

#include<stdio.h>

Long stepen(int n, int k);

int main(){

}

long stepen(int n, int k){
    if (k == 1)
    {
        return n;
    }
    if (k % 2 == 0)
    {
        return stepen(n, k/2) * stepen(n ,k/2);
    }
    else{
        return n * stepen()*stepen(n, k/2) * stepen(n ,k/2);
    }
}