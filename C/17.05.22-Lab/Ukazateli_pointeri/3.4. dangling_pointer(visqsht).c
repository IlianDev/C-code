#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int *)malloc(sizeof(int));
    int a=5;
    ptr=&a;
    free(ptr); // освобождаваме, 

    //now this ptr is known as dangling pointer.
    printf("After deallocating its memory *ptr=%d", *ptr);
    return 0;
}

/*
Когато работим с указатели. Представете си че ние имме указател, който сочи към
една променлива, която заема памет 4б, ако е от тип int. 
И ние рещаваме да изтрием тази променлива, това става с free() - изтриваме стойността на
указателя, който сочи към нея. И се получава висащ указател. 
malloc() - отделя памет. Заделя толкова памет колкото е посочено в () 
*/