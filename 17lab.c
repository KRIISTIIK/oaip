#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;




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



void insertElement(int index, int value) {
	int newArr[NUM_ELEMENTS];
	for (int i = 0; i < index; i++) {
		newArr[i] = arr[i];
	}
	newArr[index] = value;
	for (int i = index; i < n; i++) {
		newArr[i + 1] = arr[i];
	}
	n++;
	for (int i = 0; i < n; i++) {
		arr[i] = newArr[i];
	}
}
void deleteElement(int index) {
	for (int i = index; i < n; i++) {
		arr[i] = arr[i + 1];
	}
	n = n - 1;
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
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
void deleteMin() {
	int min = arr[0];
	int minIndex = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
	}
	for (int i = minIndex; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
}

int findIndexMin() {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = i;
		}
	}
	return min;
}

void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
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
		printf("Содержимое массива: ");
		printElements();
		printf("Выберите нужную вам операцию:\n");
		printf("1: Ввести с клавиатуры массив\n");
		printf("2: x10 для всех нечетных элементов\n");
		printf("3: Найти минимальный элемент\n");
		printf("4: Сколько элементов > 10\n");
		printf("5: x2 для последнего чётного\n");
		printf("6: Сколько чётных левее минимального\n");
		printf("7: Удалить заданный элемент массива\n");
		printf("8: Вставить новый элемент в заданное место\n");
		printf("9: Удалить минимальный элемент\n");
		printf("10: Перед минимальным элементом вставить 0\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");

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
		case 7:
		{
			printf("Индекс удаляемого элемента = ");
			int index;
			scanf_s("%d", &index);

			deleteElement(index);
			break;
		}
		case 8:
		{
			printf("Перед каким элементом нужно вставить новый? Индекс = ");
			int index;
			scanf_s("%d", &index);

			printf("Значение, которое нужно вставить = ");
			int value;
			scanf_s("%d", &value);

			insertElement(index, value);
			break;
		}
		case 9:
		{
			deleteMin();
			break;
		}
		case 10:
		{
			int index = findIndexMin();
			insertElement(index, 0);
			break;
		}
		}
	} while (item != 0);
}



