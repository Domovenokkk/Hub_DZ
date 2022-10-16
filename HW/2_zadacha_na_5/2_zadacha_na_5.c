#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <locale.h>
#include <windows.h>
#pragma warning (disable:4996)

void GetStr1(char* str1, int* size1) {
	*size1 = 0;
	printf("\nВведите первый отрывок: ");
	gets(str1);
	while (str1[(*size1)] != '\0') {
		(*size1)++;
	}
}

void GetStr2(char* str2, int* size2) {
	*size2 = 0;
	printf("\nВведите второй отрывок: ");
	gets(str2);
	while (str2[(*size2)] != '\0') {
		(*size2)++;
	}
}

void Hello() {
	printf("Добро пожаловать!");
	printf("\nДанная программа позволит вам объеденить две строки в одну.");
	printf("\nНужно ввести два отрывка.");
}

void Printf3(char* str1, char* str2, int* size1, int* size2) {
	printf("%s %s", str1, str2);

}

int main() {
	setlocale(LC_ALL, "russian");
	char* str1 = (char*)malloc(sizeof(char) * 10000);
	char* str2 = (char*)malloc(sizeof(char) * 10000);
	int* size1;
	int* size2;
	Hello();
	Sleep(1000);
	GetStr1(str1, &size1);
	GetStr2(str2, &size2);
    printf("\nРезультат объединения: ");
	Printf3(str1, str2, &size1, &size2);
}