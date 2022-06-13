/*
Задача 8. Направете структура struct rect, която съдържа в
себе си две точки. Създайте обект от тип тази структура наречен
screen. Използвайте функцията makepoint за да зададете начална точка
на екрана (0, 0) и крайна точка (15, 15). Запълнете пространството
между тях с тирета.
*/


#include <stdio.h>
#include <string.h>
 
typedef struct rect {
    int x;
    int y;
}point;
 
typedef struct screen {
    point a;
    point b;
}screen;
 
char makepoint(int a, int b) {
 
    if ((a == 0 && b == 0) || (a == 14 && b == 14)) {
        return '*';
    } else {
        return '-';
    }
}
 
 
int main(){
 
    screen figure_points;
    figure_points.a.x = 0;
    figure_points.a.y = 0;
    figure_points.b.x = 15;
    figure_points.b.y = 15;
 
    for (int i = figure_points.a.x; i < figure_points.b.x; ++i) {
        for (int j = figure_points.a.y; j < figure_points.b.y; ++j) {
            printf(" %c ", makepoint(i, j));
        }
        printf("\n");
    }
    return 0;
}