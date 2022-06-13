/*
Задача 8. Направете структура struct rect, която съдържа в
себе си две точки. Създайте обект от тип тази структура наречен
screen. Използвайте функцията makepoint за да зададете начална точка
на екрана (0, 0) и крайна точка (15, 15). Запълнете пространството
между тях с тирета.
*/

struct point{
    int x;
    int y;
};
 
struct point MakePoint(int x, int y){
    struct point* pntr;
    pntr = malloc(sizeof(struct point));
    pntr->x = x;
    pntr->y = y;
 
    return *pntr;
};
 
int main()
{
    int top_left = 0, top_right = 0, bott_left = 0, bott_right = 0;
    int i, j;
 
    printf("Please enter coordinates:\n");
    scanf("%d %d %d %d", &top_left, &top_right, &bott_left, &bott_right);
 
    struct point top_left_corner = MakePoint(top_left, top_right);
    struct point bottom_right_corner = MakePoint(bott_right, bott_left);
 
    for (i = top_left_corner.x; i < bottom_right_corner.x; i++){
        for (j = top_left_corner.y; j < bottom_right_corner.y; j++){
            printf("- ");
        }
        printf("\n");
    }
 
    return 0; 
}