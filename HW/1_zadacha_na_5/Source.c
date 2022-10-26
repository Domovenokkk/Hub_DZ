#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include <windows.h>

void PrintMenu() {
	printf("\n�������� �������� ��� ��������:");
	printf("\n\t1)����� �������� �������.");
	printf("\n\t2)����� ������� �������.");
	printf("\n\t3)����� ������� �������������� �������.");
	printf("\n\t4)������� ������");
}

void GenerateMass(int size, int* mass) {
	int i;
	srand(time(0));
	printf("��� ������ =");
	for (i = 0; i < size; i++) {
		mass[i] = rand() % 100;
		printf(" %d ", mass[i]);
	}
}

void MaxMass(int size, int* mass) {
	int max = mass[0], i;
	for (i = 0; i < size; i++) {
		if (mass[i] > max) {
			max = mass[i];
		}
	}
	printf("%d", max);
}

void MinMass(int size, int* mass) {
	int min = mass[0], i;
	for (i = 0; i < size; i++) {
		if (mass[i] < min) {
			min = mass[i];
		}
	}
	printf("%d", min);
}

void SrArifMass(int size, int* mass) {
	int sum = 0, i;
	float srdarf = 0;
	for (i = 0; i < size; i++) {
		sum = sum + mass[i];
	}
	srdarf = sum / size;
	printf("%f", srdarf);
}

void PrintfMass(int size, int* mass) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}



int main() {
	setlocale(LC_ALL, "russian");
	int* mass;
	int size, num;
	printf("����� ����������!");
	Sleep(500);
	system("cls");
	printf("������� ������ ������� - ");
	scanf_s("%d", &size);
	Sleep(500);
	system("cls");
	mass = (int*)malloc(sizeof(int) * size);
	GenerateMass(size, mass);
	PrintMenu();
	printf("\n�������� ����� - ");
	scanf_s("%d", &num);
	if (num == 1) {
		MaxMass(size, mass);
	}
	else if (num == 2) {
		MinMass(size, mass);
	}
	else if (num == 3) {
		SrArifMass(size, mass);
	}
	else if (num == 4) {
		PrintfMass(size, mass);
	}
	return 0;
}


