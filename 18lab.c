#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

void task1();
void task2();
void task3();
void task4();

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int task;
    printf("номер задачи: ");
    scanf_s("%d", &task);

    switch (task) {
    case 1: task1(); break;
    case 2: task2(); break;
    case 3: task3(); break;
    case 4: task4(); break;
    }
}

void task1() {
    int a, b, c, p;

    FILE* fin = fopen("in1.txt", "rt");
    fscanf(fin, "%d%d%d", &a, &b, &c);
    if (fin == NULL) {
        printf("входной не найден");
        return;
    }
    fclose(fin);

    printf("ввели: %d, %d, %d\n", a, b, c);
    p = a * b * c;
    printf("p = %d\n", p);

    FILE* fout = fopen("out1.txt", "wt");
    if (fout == NULL) {
        printf("выходной не создан");
        return;
    }
    fprintf(fout, "%d", p);
    fclose(fout);
}

void task2() {
    int a, b, c, d, e, summ;

    FILE* fin = fopen("in2.txt", "rt");
    if (fin == NULL) {
        printf("входной не найден");
        return;
    }
    fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
    fclose(fin);

    printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, d, e);

    summ = a + b + c + d + e;
    printf("сумма равна %d\n", summ);

    FILE* fout = fopen("out2.txt", "wt");
    if (fout == NULL) {
        printf("выходной не создан");
        return;
    }
    fprintf(fout, "%d", summ);
    fclose(fout);
}

void task3() {
    int a[NUM_ELEMENTS];
    int n;
    double av = 0;

    FILE* fin = fopen("in3.txt", "rt");
    if (fin == NULL) {
        printf("входной не найден");
        return;
    }
    fscanf(fin, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%d", &a[i]);
    }
    fclose(fin);

    printf("n: %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a[i]);
        av += a[i];
    }
    av = av / n;
    printf("ср знач: %f\n\n", av);

    for (int i = 0; i < n; i++) {
        if (a[i] > av) {
            a[i] *= 10;
        }
    }

    printf("n: %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a[i]);
    }
    FILE* fout = fopen("out3.txt", "wt");
    if (fout == NULL) {
        printf("выходной не создан");
        return;
    }
    fprintf(fout, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(fout, "%d ", a[i]);
    }
    fclose(fout);
}

void task4() {
    int a[NUM_ELEMENTS];
    int n;
    double av = 0;

    FILE* fin = fopen("in4.txt", "rt");
    if (fin == NULL) {
        printf("входной не найден");
        return;
    }
    fscanf(fin, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%d", &a[i]);
    }
    fclose(fin);

    printf("n: %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a[i]);
        av += a[i];
    }
    av = av / n;
    printf("ср знач: %f\n\n", av);

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (a[i] < n) {
                a[i] /= 2;
            }
        }
    }

    printf("n: %d\n", n);

    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a[i]);
    }


    FILE* fout = fopen("out4.txt", "wt");
    if (fout == NULL) {
        printf("выходной не создан");
        return;
    }
    fprintf(fout, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(fout, "%d ", a[i]);
    }
    fclose(fout);
}


