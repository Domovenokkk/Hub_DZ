#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <locale.h>
#include <windows.h>

void sli(char* stroka1, char* stroka2, char* stroka3) {
	int size1 = 0, size2 = 0, size3 = 0, i = 0;
	printf("¬ведите первую строку: ");
	gets(stroka1);
	while (stroka1[(size1)] != '\0') {
		(size1)++;
	}
	printf("¬ведите вторую строку: ");
	gets(stroka2);
	while (stroka2[(size2)] != '\0') {
		(size2)++;
	}
	size3 = size1 + size2 + 1;
	for (i = 0; i < size1; i++) {
		stroka3[i] = stroka1[i];
	}
	stroka3[i] = ' ';
	for (int j = i + 1; j - i - 1 < size2; j++) {
		stroka3[j] = stroka2[j - i - 1];
	}
	printf("–езультат: ");
	for (int i = 0; i < size3; i++) {
		printf("%c", stroka3[i]);
	}
}

int main() {
	setlocale(LC_ALL, "russian");
	char* stroka1 = (char*)malloc(sizeof(char) * 10000);
	char* stroka2 = (char*)malloc(sizeof(char) * 10000);
	char* stroka3 = (char*)malloc(sizeof(char) * 20001);
	sli(stroka1, stroka2, stroka3);
}