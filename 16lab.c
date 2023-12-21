#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

int findIndexMin() {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = i;
		}
	}
	return min;
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}


void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}




void printElements() {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int bolsh10() {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 10) {
			k = k + 1;
		}
	}
	return k;
}

int findMin() {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int findLastEven() {
	int lasteven = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			lasteven = i;
		}
	}
	return lasteven;
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
		printf("Содержимое массива: ");
		printElements();
		printf("выберите нужную вам операцию:\n");
		printf("1: вести с клавиатуры массив\n");
		printf("2: x10 для всех нечетных элементов\n");
		printf("3: найти минимальный элемент\n");
		printf("4: сколько элементов > 10\n");
		printf("5: x2 для последнего чётного\n");
		printf("6: сколько чётных левее минимального\n");
		printf("\n");
		printf("0: выйти из программы\n");
		printf("выбранная операция >>>>>> ");

		scanf_s("%d", &item);

		switch (item) {
		case 1:
			keyboardInput();
			break;
		case 2:
			oddsX10();
			break;
		case 3:
		{
			int min = findMin();
			printf("min = %d\n", min);
			break;
		}
		case 4:
		{
			int k = bolsh10();
			printf("Больше десяти: %d эл.\n", k);
			break;
		}
		case 5:
		{
			int index = findLastEven();
			if (index >= 0) {
				arr[index] *= 2;
			}
			break;
		}
		case 6:
		{
			int index = findIndexMin();
			printf("Индекс минимального элемента = %d\n", index);

			int cnt = 0;
			for (int i = 0; i < index; i++) {
				if (arr[i] % 2 == 0) {
					cnt++;
				}
			}
			printf("Левее минимального %d чётн.эл.\n", cnt);
			break;
		}
		}
	} while (item != 0);
}



