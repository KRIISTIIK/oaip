#include <stdio.h>
#include <math.h>
#include <Windows.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS


void f1(int n) {
	printf("%d ", n);
	if (n > 1) f1(n - 2);
}

void f2(int n) {
	if (n > 1) f2(n - 2);
	printf("%d ", n);
}

void f3(int n) {
	printf("%d ", n);
	if (n == 1)
	{
		return;
	}
	if (n > 1)
	{
		f3(n - 2);
	}
	printf("%d ", n);
}


int fact(int n) {
	if (n == 0)
	{
		return 1;
	}
	return fact(n - 1) * n;
}

void recEGE1(int n) {
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}

void f1ege(int n) {
	if (n > 2) {
		printf("%d\n", n);
		f1(n - 3);
		f1(n - 4);
	}
}

void f2ege(int n) {
	printf("%d\n", n);
	if (n < 5) {
		f2ege(n + 1);
		f2ege(n + 3);
	}
}


void g3ege(int n);
void f3ege(int n) {
	if (n > 0)
		g3ege(n - 1);
}
void g3ege(int n) {
	printf("*");
	if (n > 1)
		f3ege(n - 3);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//ЗАДАЧА 1
	//printf("%d", fact(5));



	//ЗАДАЧА 2
	/*f1(13);
	printf("\n");
	f2(13);
	printf("\n");
	f3(13);
	printf("\n");*/

	//ЗАДАЧА 3
	/*f1(7);
	printf("\n");
	f2(7);
	printf("\n");
	f3(7);
	printf("\n");*/

	//ЗАДАЧА 4
	//recEGE1(3);


	//ЗАДАЧА 5
	//f1ege(10);


	//ЗАДАЧА 6
	//f2ege(1);

	//ЗАДАЧА 7
	f3ege(11);

}


