#include<stdio.h>

struct tagStest
{
    int n_Num;
    float m_Rate;
    struct tagStest *test_ptr;
};


int main()
{
    struct tagStest stVar = {1, 5.5};
    struct tagStest *stVal = &stVar;

    stVar.n_Num = 13;
    stVal -> m_Rate = 6.78;

    printf("Printing the pointer: %d\n", stVal->m_Rate);
}