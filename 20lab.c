#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define MAX_N 100
#define MAX_M 100
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable : 4996)

int n = 3, m = 3;
int arr[MAX_N][MAX_M];



void all_random() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = (int)(rand() % 100);
		}
	}
}

void kratn10() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 10 == 0) {
				arr[i][j] = arr[i][j] / 10;
			}
		}
	}
}


void nechetx10() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 2 != 0) {
				arr[i][j] *= 10;
			}
		}
	}
}


void saveArr() {
	FILE* fout = fopen("save.txt", "wt");
	fprintf(fout, "%d %d\n", n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fprintf(fout, "%d ", arr[i][j]);
		}
	}
	fclose(fout);
}

void delStr(int c) {
	for (int i = c; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}

void openArr() {
	FILE* fin = fopen("open.txt", "rt");
	fscanf(fin, "%d %d\n", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fscanf(fin, "%d", &arr[i][j]);
		}
	}
	fclose(fin);
}


void repCol(int c) {
	if (m < MAX_M) {
		for (int i = 0; i < n; i++) {
			arr[i][m] = arr[i][c];
		}
		m++;
	}
}

void inputArr() {
	int n1, m1;

	printf("n: ");
	scanf_s("%d", &n1);
	printf("m: ");
	scanf_s("%d", &m1);

	n = n1, m = m1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
}

void all_nuli() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
}

void print_arr() {
	printf("размеры: [%d][%d]\n", n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void ix10plusj() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = i * 10 + j;;
		}
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("—одержимое массива: ");
		print_arr();
		printf("¬ыберите нужную вам операцию:\n");
		printf("1: заполнить значени€ми i * 10 + j\n");
		printf("2: заполнить нул€ми\n");
		printf("3: заполнить случайными значени€ми\n");
		printf("4: все нечЄтные увеличить в 10 раз\n");
		printf("5: все кратные 10 уменьшить в 10 раз\n");
		printf("6: ввести массив\n");
		printf("7: сохранить массив\n");
		printf("8: открыть массив\n");
		printf("9: удалить строку\n");
		printf("10: продублировать столбец\n");
		printf("\n");
		printf("-1: ¬ыйти из программы\n");
		printf("¬ыбранна€ операци€ >>>>>> ");

		scanf_s("%d", &item);

		switch (item) {
		case 1:
			ix10plusj();
			break;
		case 2:
			all_nuli();
			break;
		case 3:
		{
			all_random();
			break;
		}
		case 4:
		{
			nechetx10();
			break;
		}
		case 5:
		{
			kratn10();
			break;
		}
		case 6:
		{
			inputArr();
			break;
		}
		case 7:
		{
			saveArr();
			break;
		}
		case 8:
		{
			openArr();
			break;
		}
		case 9:
		{
			int num;
			printf("номер удал€емой строки: ");
			scanf_s("%d", &num);
			delStr(num);
			break;
		}
		case 10:
		{
			int c;
			printf("номер дублируемого столбца: ");
			scanf_s("%d", &c);
			repCol(c);
			break;
		}
		break;
		}
	} while (item != -1);
}



