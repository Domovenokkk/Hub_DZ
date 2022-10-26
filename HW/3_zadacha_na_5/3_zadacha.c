#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include <windows.h>


void GenerateMass(int size, int* mass) {
	int i;
	printf("Ваш массив - ");
	for (i = 0; i < size; i++) {
		scanf_s("%d ", &mass[i]);
	}
}
void SortMass(int size, int* mass) {
	int i, j, imp;
	for (i = 0; i < size; i++) {
		for (j = i; j < size; j++) {
			if ((mass[i] % 2 == 0 && mass[j] % 2 == 0) && (mass[i] > mass[j])) {
				imp = mass[i];
				mass[i] = mass[j];
				mass[j] = imp;
			}
		}
	}
}

void PrintMass(int size, int* mass) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}



int main() {
	setlocale(LC_ALL, "russian");
	int x = 4;
	int size, swaps = 0, comps = 0;
	int* mass;
	printf("Добро пожаловать! Мы поможем вам отсортировать ваш массив.");
	printf("\nВведите размер массива - ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	GenerateMass(size, mass);
	SortMass(size, mass);
	printf("Результат сортировки: ");
	PrintMass(size, mass);
}