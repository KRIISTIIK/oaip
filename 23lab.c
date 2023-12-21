#include <stdio.h>
#include <math.h>
#include <Windows.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS



int fact(int n) {
	if (n == 0) {
		return 1;
	}
	return fact(n - 1) * n;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	printf("%d", fact(5));

	//ЗАДАЧА 1
	/*FILE* fin = fopen("text1.txt", "rt");
	FILE* fout;
	fout = fopen("out1.txt", "wt");
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			for (int i = 0; s[i] != '\0'; i++) {

				if (s[i] == '\t')
					s[i] = '%';

			}
			fprintf(fout, "%s", s);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("Задача 1 FINISH\n");*/


	//ЗАДАЧА 2
	/*FILE* fin = fopen("text2.txt", "rt");
	FILE* fout;
	fout = fopen("out2.txt", "wt");
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toUpperAll(s[i]);
			}
			fprintf(fout, "%s", s);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("Задача 2 FINISH\n");*/

	//ЗАДАЧА 3
	/*FILE* fin = fopen("text3.txt", "rt");
	FILE* fout = fopen("out3.txt", "wt");
	while (fgets(s, MAX_LEN, fin)) {
		int hasLetter = 0;
		for (int i = 0; s[i] != '\0'; i++) {
			if (isalpha((unsigned char)s[i])) {
				hasLetter = 1;
				break;
			}
		}
		fputs(s, fout);
		if (hasLetter) {
			fputc('#', fout);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("Задача 3 FINISH\n");*/

	//ЗАДАЧА 4
	//int getNextDelim(FILE * fp, char token[]);
	//int getNextWord(FILE * fp, char token[], int maxLen);

	//char filename[] = "text1.txt";

	//// открываем файл с текстом
	//FILE* fin = fopen(filename, "rt");
	//if (fin == NULL) {
	//	// если файл не смогли открыть - сообщаем об этом
	//	printf("File %s doesn't opened!\n", filename);
	//	return;
	//}
	//char token[MAX_LEN];
	//int res;

	//// пока не конец файла
	//while (!feof(fin)) {
	//	// пока есть разделитель - берем его
	//	while (getNextDelim(fin, token)) {
	//		// выводим разделитель в консоль
	//		printf("<DELIM>%s</DELIM>\n", token);
	//	}
	//	// если есть слово - берем его
	//	if (getNextWord(fin, token, MAX_LEN)) {
	//		// выводим слово в консоль
	//		printf("<WORD>%s</WORD>\n", token);
	//	}
	//}
	//// Закрываем файл с текстом
	//fclose(fin);
	//printf("END!!!\n");

	//ЗАДАЧА 5
	//char filenameIn[] = "text1.txt";
	//char filenameHTML[] = "text1_out.html";
	//printf("BEGIN!!!\n");

	//// открыть файл текстовый (ВХОДНОЙ)
	//FILE* fin = fopen(filenameIn, "rt");
	//if (fin == NULL) {
	//	// если файл не смогли открыть - сообщаем об этом
	//	printf("File %s doesn't opened!\n", filenameIn);
	//	return;
	//}
	//// открыть HTML файл (выходной файл)
	//FILE* fout = fopen(filenameHTML, "wt");
	//if (fout == NULL) {
	//	// закрываем ранее успешно открытый входной файл
	//	fclose(fin);
	//	// если файл не смогли открыть - сообщаем об этом
	//	printf("File %s doesn't opened!\n", filenameHTML);
	//	return;
	//}


	//// Выводим в выходной файл заголовок HTML документа
	//fprintf(fout, "<!DOCTYPE html>");
	//fprintf(fout, "<html>");
	//fprintf(fout, "<head>");
	//fprintf(fout, "<meta http - equiv = \"Content-Type\" content = \"text/html; charset=utf-8\" />");
	//fprintf(fout, "<title>HTML Document</title>");
	//fprintf(fout, "</head>");
	//fprintf(fout, "<body>");

	//int ch;
	//while ((ch = getc(fin)) != EOF) {
	//	// в HTML файл добавляем только что прочитанный
	//	// символ "КАК ЕСТЬ"
	//	fprintf(fout, "%c", ch);

	//	// если в тексте был символ новой строки –
	//	// в HTML добавляем тег <BR> - новая строка
	//	if (ch == '\n')
	//		fprintf(fout, "<br>");
	//}

	//// выводит в HTML завершающие теги документа HTML
	//fprintf(fout, "</body>");
	//fprintf(fout, "</html>");
	//// Закрываем файл с текстом
	//fclose(fin);

	//// Закрываем HTML файл
	//fclose(fout);
	//printf("END!!!\n");


	//ЗАДАЧА 6
	/*FILE* fin = fopen("text6.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	FILE* fout;
	fout = fopen("out6.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	int digits = 0;
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			digits = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				if (isT(s[i])) {
					digits++;
				}
			}
			char str[MAX_LEN];
			sprintf(str, "%d", digits);
			if (digits != 0) {
				strcat(s, str);
			}
			fprintf(fout, "%s", s);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("Задача 6 FINISH\n");*/



	////ЗАДАЧА 7
	//FILE* inputFile, * outputFile;
	//int character;
	//inputFile = fopen("text7.txt", "rt");
	//outputFile = fopen("out7.txt", "wt");
	//if (inputFile == NULL || outputFile == NULL) {
	//	printf("ошибка открытия файлов\n");
	//	return 1;
	//}
	//while ((character = fgetc(inputFile)) != EOF) {
	//	if (isalpha(character)) {
	//		character = tolower(character);
	//	}
	//	fputc(character, outputFile);
	//}
	//fclose(inputFile);
	//fclose(outputFile);
	//printf("выполнено\n");	
}


