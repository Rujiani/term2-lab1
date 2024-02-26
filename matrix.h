#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdio.h>
#include <malloc.h>

typedef struct Line{
int n;
int *a;
} Line;

typedef struct Matrix{
int lines;
Line *matr;
} Matrix;

int getInt(int *); // ввод целого числа
int input(Matrix *a); // ввод матрицы
void output(Matrix a); // вывод матрицы
void erase(Matrix *a); // освобождение занятой памяти
void addLine(Matrix a, Matrix b); // добавление строки
void getLine(Matrix a, Line line); // копирование и удаление строки
#endif
