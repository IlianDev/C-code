/*
3) Напишете C програма за сравняване на два низа, използвайки цикъл символ по символ, без
да използвате вградена библиотечна функция strcmp() 
*/

#include<stdio.h>

// compare func
int compare ();

int main()
{
    char str1[20]; 
    char str2[20]; 

    printf("Enter the first string : ");  
    scanf("%s",str1); 

    printf("Enter the second string : ");  
    scanf("%s",str2); 

    int isSame = compare(str1, str2);

    if (isSame == 0){
        printf("The two strings are the same.");
    }
    else
    printf("The two strings are not the same.");
}

int compare (char a[], char b[])
{
    int flag = 0, i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        return 0;
    }
    else
    return 1;
}

