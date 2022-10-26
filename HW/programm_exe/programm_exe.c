#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
int main() {
	setlocale(LC_ALL, "russian");
	int figur, side1, side2, task, square, perimetr, diag, side3, radius, diametr, flag;
	flag = 0;
	float pi, dlina_okr, square_okr;
	pi = 3.14;
	printf("Добро пожаловать!");
	Sleep(500);
	system("cls");
link1:
	printf("1. Прямоугольник.");
	printf("\n2. Треугольник.");
	printf("\n3. Круг.");
	printf("\nВвод: ");
	scanf_s("%d", &figur);
	system("cls");
	if (figur == 1) {
		printf("Введите две стороны прямоугольника: ");
		scanf_s("%d %d", &side1, &side2);
		system("cls");
		printf("Меню:");
		printf("\n1. Найти площадь прямоугольника.");
		printf("\n2. Найти периметр прямоугольника.");
		printf("\n3. Найти диагональ прямоугольника.");
		printf("\n4. Вернуться к выбору фигуры.");
		printf("\n0. Выйти");
		printf("\nВвод: ");
		scanf_s("%d", &task);
		system("cls");
		if (task == 4) {
			goto link1;
		}
		else if (task == 1) {
			square = side1 * side2;
			printf("Площадь прямоугольника = %d", square);
		}
		else if (task == 2) {
			perimetr = side1 * 2 + side2 * 2;
			printf("Периметр прямоугольника = %d", perimetr);
		}
		else if (task == 3) {
			diag = sqrt(pow(side1, 2) + pow(side2, 2));
			printf("Диагональ прямоугольника = %d", diag);
		}
		else if (task == 0) {
			return 0;
		}
	}
	
	if (figur == 2) {
		printf("Введите две стороны прямоугольного треугольника: ");
		scanf_s("%d %d", &side1, &side2);
		system("cls");
		printf("Меню:");
		printf("\n1. Найти площадь треугольника.");
		printf("\n2. Найти периметр треугольника.");
		printf("\n3. Вернуться к выбору фигуры.");
		printf("\n0. Выйти");
		printf("\nВвод: ");
		scanf_s("%d", &task);
		system("cls");
		if (task == 3) {
			goto link1;
		}
		else if (task == 1) {
			square == (side1 * side2) / 2;
			printf("Площадь треугольника = %d", square);
		}
		else if (task == 2) {
			side3 = sqrt(pow(side1, 2) + pow(side2, 2));
			perimetr = side1 + side2 + side3;
			printf("Периметр треугольника = %d", perimetr);
		}
		else if (task == 0) {
			return 0;
		}
	}

	if (figur == 3) {
		printf("Введите радиус окружности: ");
		scanf_s("%d", &radius);
		system("cls");
		printf("Меню:");
		printf("\n1. Найти площадь окружности.");
		printf("\n2. Найти длину круга.");
		printf("\n3. Найти диаметр окружности.");
		printf("\n4. Вернуться к выбору фигуры.");
		printf("\n0. Выйти");
		printf("\nВвод: ");
		scanf_s("%d", &task);
		system("cls");
		if (task == 4) {
			goto link1;
		}
		else if (task == 0) {
			return 0;
		}
		else if (task == 1) {
			square_okr = pi * pow(radius, 2);
			printf("Площадь окружности = %f", square_okr);
		}
		else if (task == 2) {
			dlina_okr = 2 * pi * radius;
			printf("Длина окружности = %f", dlina_okr);
		}
		else if (task == 3) {
			diametr = radius * 2;
			printf("Диаметр окружности = %d", diametr);
		}
	}
	return 0;
}
