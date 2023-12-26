#include <stdio.h>
#include <math.h>
#include <Windows.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
typedef struct Node {
	int data;
	struct Node* next;
} Node;

struct Node* first = NULL;



void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}



int deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);
	return value;
}

int contains(int value) {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data == value) {
			return 1;
		}
		ptr = ptr->next;
	}
	return 0;
}



int evenCount() {
	int s = 0;
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data % 2 == 0) {
			++s;
		}
		ptr = ptr->next;
	}
	return s;
}

void elementIx100(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index == i) {
			ptr->data = ptr->data * 100;
			return;
		}
		ptr = ptr->next;
		index++;
	}
}

int sum() {
	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		s += ptr->data;
		ptr = ptr->next;
	}
	return s;
}

void oddsX10() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data % 2 != 0) {
			ptr->data = ptr->data * 10;
		}
		ptr = ptr->next;
	}
}

void elementLeftIx100(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index < i) {
			ptr->data = ptr->data * 100;
		}
		else {
			return;
		}
		ptr = ptr->next;
		index++;
	}
}

void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}
void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void addToTail(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->next = NULL;
	newNode->data = value;
	if (first == NULL) {
		first = newNode;
	}
	else {
		struct Node* current = first;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//ЗАДАЧА 1
	/*printList();
	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);
	printList();

	printf("сумма: %d\n", sum());

	clearList();
	printList();
	printf("сумма: %d\n", sum());*/

	//ЗАДАЧА 2
	/*printList();
	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	printf("кол во четных: %d\n", evenCount());

	clearList();
	printList();
	printf("кол во четных: %d\n", evenCount());*/

	//ЗАДАЧА 3
	/*printList();
	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	addToTail(10);
	printList();*/


	//ЗАДАЧА 4
	/*printList();
	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementIx100(0);
	printList();

	elementIx100(2);
	printList();

	elementIx100(0);
	printList();*/


	//ЗАДАЧА 5
	/*printList();
	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementLeftIx100(1);
	printList();

	elementLeftIx100(2);
	printList();

	elementLeftIx100(4);
	printList();*/


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

	//ЗАДАЧА 7 добавление в конец списка	
	/*printList();
	addToHead(1);
	addToTail(41);
	addToTail(10);
	printList();*/
}



