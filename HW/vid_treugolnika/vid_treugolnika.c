#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int side_1, side_2, side_3;
	printf("Первая сторона равна = ");
	scanf_s("%d", &side_1);
	printf("Вторая сторона равна = ");
	scanf_s("%d", &side_2);
	printf("Третья сторона равна = ");
	scanf_s("%d", &side_3);
	if ((side_1 + side_2 <= side_3) || (side_2 + side_3 <= side_1) || (side_1 + side_3 <= side_2)) {
		printf("Такого треугольника не существует");
	}
	else {
		if (((side_1 == side_2) || (side_1 == side_3) || (side_2 == side_3)) && ((side_1 != side_2) || (side_2 != side_3) || (side_1 != side_3))) {
			printf("Треугольник равнобедренный");
		}
		else if ((side_1 == side_2) && (side_1 == side_3) && (side_2 == side_3)) {
			printf("Треугольник равносторонний");
		}
		else if ((pow(side_1, 2) + pow(side_2, 2) == pow(side_3, 2) || (pow(side_1, 2) + pow(side_2, 2) == pow(side_3, 2)) || (pow(side_1, 2) + pow(side_2, 2) == pow(side_3, 2)))) {
			printf("Треугольник прямоугольный");
		}
		else {
			printf("Произвольный");
		}
	}
	return 0;
}