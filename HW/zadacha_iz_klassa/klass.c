#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <math.h>

void GetStr(char* str, int* size) {
	*size = 0;
	printf("Введите строку, в которой будет меньше 100 символов: ");
	gets(str);
	while (str[(*size)] != '\0') {
		(*size)++;
	}
}

void PrintMenu() {
	printf("\nВыберете действие над строкой:");
	printf("\n1. Заменить строку.");
	printf("\n2. Обрезать строку.");
	printf("\n3. Перевернуть строку.");
	printf("\n4. Изменить регистр:");
	printf("\n\t1) В верхний регистр.");
	printf("\n\t2) В нижний регистр.");
	printf("\n\t3) В противоположный регистр.");
	printf("\nНапишите цифру - ");
}

void ObrezStr(char* str, int* size) {
	int index = (*size) + 1;
	while (index > *size || index < 0) {
		printf("Введите значение, по которое хотите обрезать строку - : ");
		scanf_s(" %d", &index);
	}
	for (int i = 0; i < index; i++) {
		printf("%c", str[i]);
	}
	*size = index;
	printf("\n");
}

void InverseStr(char* str, int size) {
	char inv;
	for (int i = 0; i < size / 2; i++) {
		inv = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = inv;
	}
}

void PrintfResult(char* str, int size) {
	printf("Результат работы: ");
	for (int i = 0; i < size; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}

void DownReg(char* str, int size) {
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", str[i] + 32);
		}
		else if (str[i] >= 'А' && str[i] <= 'Я') {
			printf("%c", str[i] + 32);
		}
		else {
			printf("%c", str[i]);
		}
	}
	printf("\n");
}

void InvReg(char* str, int size) {
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", str[i] + 32);
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", str[i] - 32);
		}
		else if (str[i] >= 'А' && str[i] <= 'Я') {
			printf("%c", str[i] + 32);
		}
		else if (str[i] >= 'а' && str[i] <= 'я') {
			printf("%c", str[i] - 32);
		}
		else {
			printf("%c", str[i]);
		}
	}
	printf("\n");
}


void UpperReg(char* str, int size) {
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", str[i] - 32);
		}
		else if (str[i] >= 'а' && str[i] <= 'я') {
			printf("%c", str[i] - 32);
		}
		else {
			printf("%c", str[i]);
		}
	}
}


int main() {
	setlocale(LC_ALL, "russian");
	char* str = (char*)malloc(sizeof(char) * 100);
	int* size;
	int menupick, reg, newtask;
	GetStr(str, &size);
StartMenu:
	PrintMenu();
	scanf_s("%d", &menupick);

	if (menupick == 2) {
		ObrezStr(str, &size);
	}
	else if (menupick == 3) {
		InverseStr(str, size);
		PrintfResult(str, size);
	}
	else if (menupick == 4) {
		printf("\nВыберете, в какой регистр хотите поменять строку - ");
		scanf_s("%d", &reg);

		if (reg == 2) {
			DownReg(str, size);
		}
		else if (reg == 1) {
			UpperReg(str, size);
		}
		else if (reg == 3) {
			InvReg(str, size);
		}
		else {
			printf("Невозможно выполнить действие");
		}
	}
	else if (menupick == 1) {
		system("cls");
		scanf_s("%c");
		GetStr(str, &size);
		goto StartMenu;
	}

	printf("\nХотите что-то еще?");
	printf("\n-Если да, то введите 1.");
	printf("\n-Если нет, то введите 0");
	printf("\nВведите цифру - ");
	scanf_s("%d", &newtask);
	
	if (newtask == 1) {
		goto StartMenu;
	}
	else if (newtask == 0) {
		return 0;
	}


}