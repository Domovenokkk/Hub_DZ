#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int side_1, side_2, side_3;
	printf("������ ������� ����� = ");
	scanf_s("%d", &side_1);
	printf("������ ������� ����� = ");
	scanf_s("%d", &side_2);
	printf("������ ������� ����� = ");
	scanf_s("%d", &side_3);
	if ((side_1 + side_2 <= side_3) || (side_2 + side_3 <= side_1) || (side_1 + side_3 <= side_2)) {
		printf("������ ������������ �� ����������");
	}
	else {
		if (((side_1 == side_2) || (side_1 == side_3) || (side_2 == side_3)) && ((side_1 != side_2) || (side_2 != side_3) || (side_1 != side_3))) {
			printf("����������� ��������������");
		}
		else if ((side_1 == side_2) && (side_1 == side_3) && (side_2 == side_3)) {
			printf("����������� ��������������");
		}
		else if ((pow(side_1, 2) + pow(side_2, 2) == pow(side_3, 2) || (pow(side_1, 2) + pow(side_2, 2) == pow(side_3, 2)) || (pow(side_1, 2) + pow(side_2, 2) == pow(side_3, 2)))) {
			printf("����������� �������������");
		}
		else {
			printf("������������");
		}
	}
	return 0;
}