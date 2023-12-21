#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>

int* a1;
int n;

int findMax() {
    int max = a1[0];
    for (int i = 1; i < n; i++) {
        if (a1[i] > max) {
            max = a1[i];
        }
    }
    return max;
}

void task1() {
    FILE* fin = fopen("in1.txt", "rt");
    fscanf(fin, "%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%d", &a[i]);
    }
    fclose(fin);

    double av = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    av = sum / n;
    printf("n: %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a[i]);
    }
    printf("ср знач: %f\n\n", av);

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > av) {
            c++;
        }
    }

    FILE* fout = fopen("out1.txt", "wt");
    fprintf(fout, "%d\n", c);
    for (int i = 0; i < n; i++) {
        if (a[i] > av) {
            fprintf(fout, "%d ", a[i]);
        }
    }
    fclose(fout);
}

void task2() {
    FILE* fin = fopen("in2.txt", "rt");
    fscanf(fin, "%d", &n);
    a1 = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%d", &a1[i]);
    }
    fclose(fin);

    double av = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a1[i];
    }
    av = sum / n;

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a1[i] > av) {
            c++;
        }
    }

    FILE* fout = fopen("out2.txt", "wt");
    fprintf(fout, "ср знач: %f\n", av);
    fprintf(fout, "%d\n", c);
    for (int i = 0; i < n; i++) {
        if (a1[i] > av) {
            fprintf(fout, "%d ", a1[i]);
        }
    }
    fclose(fout);
}

void task3() {
    FILE* fin = fopen("in3.txt", "rt");
    fscanf(fin, "%d", &n);
    a1 = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%d", &a1[i]);
    }
    fclose(fin);

    double av = 0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a1[i];
    }
    av = sum / n;
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a1[i]);
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a1[i] < av && a1[i] > 0) {
            c++;
        }
    }

    FILE* fout = fopen("out3.txt", "wt");
    fprintf(fout, "ср знач: %f\n", av);
    fprintf(fout, "%d\n", c);
    for (int i = 0; i < n; i++) {
        if (a1[i] < av && a1[i] > 0) {
            fprintf(fout, "%d ", a1[i]);
        }
    }
    fclose(fout);
}

void task4() {
    FILE* fin = fopen("in4.txt", "rt");
    fscanf(fin, "%d", &n);
    a1 = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%d", &a1[i]);
    }
    fclose(fin);

    int max = findMax();
    double high = max * (2.0 / 3.0);
    int c = 0;

    for (int i = 0; i < n; i++) {
        if (a1[i] > high) {
            c++;
        }
    }

    FILE* fout = fopen("out4.txt", "wt");
    fprintf(fout, "%d\n", c);
    for (int i = 0; i < n; i++) {
        if (a1[i] > high) {
            fprintf(fout, "%d ", a1[i]);
        }
    }
    fclose(fout);
}

int* a1;
int n;

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int task;
    printf("Номер задачи - ");
    scanf_s("%d", &task);

    switch (task) {
    case 1: task1(); break;
    case 2: task2(); break;
    case 3: task3(); break;
    case 4: task4(); break;
    }


}

