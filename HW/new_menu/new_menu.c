#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#define MAIN_MENU 3
#define ALGORITM_MENU 3
#define FIND_MENU 3
#define SORT_MENU 2
#define SETTING_MENU 3
#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8
#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80



void GenerateMenu(HANDLE hStdOut, char** menu_names, int menu_size, int* choose_pos) {	
	int iKey;
	COORD cursorPos; 
	*choose_pos = 0;
	system("cls");
	iKey = 67;
	cursorPos = (COORD){ 0, 0 };
	SetConsoleCursorPosition(hStdOut, cursorPos);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
	while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
		switch (iKey) {
		case KEY_ARROW_UP:
			(*choose_pos)--;
			break;
		case KEY_ARROW_DOWN:
			(*choose_pos)++;
			break;
		}
		system("cls");

		if (*choose_pos < 0) { *choose_pos = menu_size - 1; }
		if (*choose_pos > menu_size - 1) { *choose_pos = 0; }
		for (int i = 0; i < menu_size; i++) {
			cursorPos = (COORD){ 3, i };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("%s \n", menu_names[i]);
		}

		cursorPos = (COORD){ 0, *choose_pos };
		SetConsoleCursorPosition(hStdOut, cursorPos);
		printf("<<", iKey);
		cursorPos = (COORD){ strlen(menu_names[*choose_pos]) + 3 + 1, *choose_pos };
		SetConsoleCursorPosition(hStdOut, cursorPos);
		printf(">>");

		iKey = _getch();
	}
}

void PrintfMass(int size, int* mass) {
	int i;
	printf("Ваш массив на данный момент: ");
	for (i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}

void CheckSort(int size, int* mass) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = i; j < size; j++) {
			if (mass[i] > mass[j]) {
				printf("Остортируйте ваш массив");
			}
		}
	}
}

void FindValue(int size, int* mass) {
	int value, i;
	printf("Какое число вы хотите найти?\n");
	printf("Введите число:");
	scanf_s("%d", &value);
	for (i = 0; i < size; i++) {
		if (mass[i] == value) {
			printf("\nЧисло %d находится под %d номером", value, i + 1);
		}
		else {
			printf("\nТакого числа не найдено в массиве");
		}
	}
}

void BinaryFind(int size, int* mass) {
	int index = -1;
	int left, right, base, value;
	left = 0;
	right = size - 1;
	printf("Какое число вы хотите найти?");
	printf("Введите число - ");
	scanf_s("%d", &value);
	while (left < right) {
		base = (right + left) / 2;
		if (mass[base] < value) {
			left = base + 1;
		}
		else if (mass[base] > value) {
			right = base - 1;
		}
		else {
			index = base;
		}
	}
	printf("\nЧисло %d находится под %d номером", value, index);

}

void BubbleSort(int size, int* mass, int* swaps_count, int* comps_count) {
	int flag = 0;
	int i, j;
	*swaps_count = 0;
	*comps_count = 0;
	for (i = 0; i < size; i++) {
		for (j = i; j < size; j++) {
			comps_count++;
			if (mass[i] < mass) {
				int imp = mass[i];
				mass[i] = mass[j];
				mass[j] = imp;
				flag = 1;
				swaps_count++;
			}
		}
		if (!flag) {
			break;
		}
	}
}

void GenerateMass(int size, int* mass) {
	int i;
	printf("Ваш массив - ");
	for (i = 0; i < size; i++) {
		scanf_s("%d ", &mass[i]);
	}
}

int main() {
	char* main_menu[MAIN_MENU] = { "Алгоритмы", "Настройки", "Выход" };
	char* algoritm_menu[ALGORITM_MENU] = { "Поиск", "Сортировка", "Назад" };
	char* find_menu[FIND_MENU] = { "Наивный поиск", "Бинарный поиск", "Назад" };
	char* sort_menu[SORT_MENU] = { "Пузырьковая сортировка", "Назад" };
	char* setting_menu[SETTING_MENU] = { "Задать массив", "Посмотреть текущий массив", "Назад" };
	int* mass = NULL;
	int size, value;
	size = 5;
	int* swaps_count;
	int* comps_count;
	int exit_flag = 0;
	int back_flag = 0;
	int choose_pos;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	while (!exit_flag) {
		GenerateMenu(hStdOut, main_menu, MAIN_MENU, &choose_pos);
		if (choose_pos == 0) {
			system("cls");
			while (!back_flag) {
				GenerateMenu(hStdOut, algoritm_menu, ALGORITM_MENU, &choose_pos);
				if (choose_pos == 0) {
					system("cls");
					while (!back_flag) {
						GenerateMenu(hStdOut, find_menu, FIND_MENU, &choose_pos);
						if (choose_pos == 0) {
							system("cls");
							//FindValue(size, mass);
							system("pause");
						}
						else if (choose_pos == 1) {
							system("cls");
							//BinaryFind(size, mass);
							system("pause");
						}
						else {
							back_flag = 1;
						}
					}
					back_flag = 0;
				}
				else if (choose_pos == 1) {
					system("cls");
					while (!back_flag) {
						GenerateMenu(hStdOut, sort_menu, SORT_MENU, &choose_pos);
						if (choose_pos == 0) {
							system("cls");
							//BubbleSort(size, mass, &swaps_count, &comps_count);
							system("pause");
						}
						else {
							back_flag = 1;
						}
					}
					back_flag = 0;
				}
				else {
					back_flag = 1;
				}
			}
			back_flag = 0;
		}
		else if (choose_pos == 1) {
			system("cls");
			while (!back_flag) {
				GenerateMenu(hStdOut, setting_menu, SETTING_MENU, &choose_pos);
				if (choose_pos == 0) {
					system("cls");
					//GenerateMass(size, mass);
				}
				else if (choose_pos == 1) {
					system("cls");
					//PrintfMass(size, mass);
					system("pause");
				}
				else {
					back_flag = 1;
				}
			}
			back_flag = 0;
		}
		else {
			exit_flag = 1;
			break;
		}
	}
}
		

	

