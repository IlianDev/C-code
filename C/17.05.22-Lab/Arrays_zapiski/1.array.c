#include<stdio.h>
int main()
{
   
    char szName [] = "Ivan Ivanov";
    printf("%c\n", szName[10]); // v

    char szJob [16] = {0};
    // char szSex [16] = {'w','o','z','m'};
    
    int szWorkDays [31] = {0, 34, 12}; // ако  int szWorkDays [31] = {0} -> всичките елементи са 0!!!
    szWorkDays [10] = 5;
    printf("%d\n", szWorkDays[10]); // 5

    int i_arr [] = {1,2,3};
    // double d_arr [] = (1.2, 2.3, 3.4);

    

}