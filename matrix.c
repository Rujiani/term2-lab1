#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int getInt(int *a){ // ввод целого числа
    int n;
    do{
        n = scanf("%d", a);
        if (n < 0) 
            return 0;
        if (n == 0){ 
            printf("%s\n", "Error! Repeat input");
            scanf("%*s");
        }
    } while (n == 0);
    return 1;
}
int input(Matrix *a){return 1;} // ввод матрицы
void output(Matrix a){} // вывод матрицы
void erase(Matrix *a){} // освобождение занятой памяти
void addLine(Matrix a, Matrix b){} // добавление строки
void getLine(Matrix a, Line line){} // копирование и удаление строки
