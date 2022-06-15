#include<stdio.h>
#include<stdlib.h>

struct point{
    int x;
    int y;
};

struct rectangle{
    int A;
    int B;
};

struct point *makeapoint(int x, int y);

int main()
{
    struct point *entrypoint = makeapoint(0, 0);
    struct point *endpoint = makeapoint(15, 15);

    for (size_t i = endpoint -> y; i < endpoint -> x; i++)
    {
        for (size_t j = endpoint -> y; j < endpoint -> y; i++){
            printf("-");
        printf("\n");
    }
    free (entrypoint);
    free(endpoint);
    return 0;
}
}
struct point *makeapoint(int x, int y){
    struct point *my_point = malloc(sizeof(struct point));
    my_point -> x = x;
    my_point -> y = y;

    return my_point;
}