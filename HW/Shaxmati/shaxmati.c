#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "russian");
	int x_start, x_finish, y_start, y_finish, figur_numb, b = 0, c = 0;
	int figur_1 = 0, figur_2 = 0, figur_3 = 0, figur_4 = 0, figur_5 = 0;
	char f1 = 'm', f2 = 'n';
	printf("1 - ������");
	printf("\n2 - �����");
	printf("\n3 - �����");
	printf("\n4 - ����");
	printf("\n5 - ����");
	printf("\n�������� ������ - ");
	scanf_s("%d", &figur_numb);
	printf("--------------------");
	printf("Start - ");
	f1 = getchar();
	scanf_s("%d", &y_start);
	printf("--------------------");
	printf("Finish - ");
	f2 = getchar();
	scanf_s("%d", &y_finish);
	x_start = f1 - 96;
	x_finish = f2 - 96;
	if (figur_numb > 0 && figur_numb < 6) {
		if (x_start >= 9 || x_finish >= 9 || y_start >= 9 || y_finish >= 9) {
			printf("�������� ����� ������");
		}
		else {
			if ((abs(x_start - x_finish) == 1 && y_start == y_finish)
				|| (abs(y_start - y_finish) == 1 && x_start == x_finish)
				|| (abs(x_start - x_finish) == 1 && abs(y_start - y_finish) == 1))
			{
				if (figur_numb == 1)
					b = 1;
				figur_1 = 1;
			}
			if ((y_start == y_finish || x_start == x_finish) || (abs(x_start - x_finish) == abs(y_start - y_finish))) {
				if (figur_numb == 2)
					b = 1;
				figur_2 = 1;
			}
			if ((x_start == x_finish) || (y_start == y_finish)) {
				if (figur_numb == 3)
					b = 1;
				figur_3 = 1;
			}
			if ((abs(x_start - x_finish) == (abs(y_start - y_finish)))) {
				if (figur_numb == 4)
					b = 1;
				figur_4 = 1;
			}
			if ((abs(x_start - x_finish) == 2 && abs(y_start - y_finish) == 1)
				|| (abs(y_start - y_finish) == 2 && abs(x_start - x_finish) == 1)
				|| (x_start == x_finish && y_start == y_finish)) {
				if (figur_numb == 5)
					b = 1;
				figur_5 = 1;
			}
		}
	}
	else {
		printf("����� ������ �� ����������\n");
	}

	if (b == 1) {
		printf("���������� ���\n");
	}
	else {
		printf("�������� ���\n");
		if (figur_1 == 1)
			printf("��� ����� ������ ������ ������\n");
		if (figur_2 == 1)
			printf("��� ����� ������ ������ �����\n");
		if (figur_3 == 1)
			printf("��� ����� ������ ������ �����\n");
		if (figur_4 == 1)
			printf("��� ����� ������ ������ ����\n");
		if (figur_5 == 1)
			printf("��� ����� ������ ������ ����\n");
	}
	return 0;
}