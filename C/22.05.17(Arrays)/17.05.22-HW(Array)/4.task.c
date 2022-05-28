// 4. Напишете програма, която да брои колко пъти се среща едно число в даден масив
// от цели числа. Масивът трябва да бъде въведен от клавиатурата. Принтирайте
// резултатите.

#include<stdio.h>
#define n 5

int main()
{
    int arr[n];
    
    printf("Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int to_search;
    printf("searched:\n");
    scanf("%d", &to_search);
    int found;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==to_search)
        {
            found = arr[i];
            counter +=1;
        }
    } 
    printf("The searched element is %d", arr[i]);
    printf("%d many times", counter);  
}