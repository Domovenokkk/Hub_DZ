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
	printf("����� ����������!");
	Sleep(500);
	system("cls");
link1:
	printf("1. �������������.");
	printf("\n2. �����������.");
	printf("\n3. ����.");
	printf("\n����: ");
	scanf_s("%d", &figur);
	system("cls");
	if (figur == 1) {
		printf("������� ��� ������� ��������������: ");
		scanf_s("%d %d", &side1, &side2);
		system("cls");
		printf("����:");
		printf("\n1. ����� ������� ��������������.");
		printf("\n2. ����� �������� ��������������.");
		printf("\n3. ����� ��������� ��������������.");
		printf("\n4. ��������� � ������ ������.");
		printf("\n0. �����");
		printf("\n����: ");
		scanf_s("%d", &task);
		system("cls");
		if (task == 4) {
			goto link1;
		}
		else if (task == 1) {
			square = side1 * side2;
			printf("������� �������������� = %d", square);
		}
		else if (task == 2) {
			perimetr = side1 * 2 + side2 * 2;
			printf("�������� �������������� = %d", perimetr);
		}
		else if (task == 3) {
			diag = sqrt(pow(side1, 2) + pow(side2, 2));
			printf("��������� �������������� = %d", diag);
		}
		else if (task == 0) {
			return 0;
		}
	}
	
	if (figur == 2) {
		printf("������� ��� ������� �������������� ������������: ");
		scanf_s("%d %d", &side1, &side2);
		system("cls");
		printf("����:");
		printf("\n1. ����� ������� ������������.");
		printf("\n2. ����� �������� ������������.");
		printf("\n3. ��������� � ������ ������.");
		printf("\n0. �����");
		printf("\n����: ");
		scanf_s("%d", &task);
		system("cls");
		if (task == 3) {
			goto link1;
		}
		else if (task == 1) {
			square == (side1 * side2) / 2;
			printf("������� ������������ = %d", square);
		}
		else if (task == 2) {
			side3 = sqrt(pow(side1, 2) + pow(side2, 2));
			perimetr = side1 + side2 + side3;
			printf("�������� ������������ = %d", perimetr);
		}
		else if (task == 0) {
			return 0;
		}
	}

	if (figur == 3) {
		printf("������� ������ ����������: ");
		scanf_s("%d", &radius);
		system("cls");
		printf("����:");
		printf("\n1. ����� ������� ����������.");
		printf("\n2. ����� ����� �����.");
		printf("\n3. ����� ������� ����������.");
		printf("\n4. ��������� � ������ ������.");
		printf("\n0. �����");
		printf("\n����: ");
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
			printf("������� ���������� = %f", square_okr);
		}
		else if (task == 2) {
			dlina_okr = 2 * pi * radius;
			printf("����� ���������� = %f", dlina_okr);
		}
		else if (task == 3) {
			diametr = radius * 2;
			printf("������� ���������� = %d", diametr);
		}
	}
	return 0;
}
