#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int side, b, c, square_side, square_surface, size;
	printf("������� = ");
	scanf_s("%d", &side);
	b = pow(side, 2);
	c = pow(side, 3);
	square_side = 4 * b;
	square_surface = 6 * b;
	size = c;
	printf("����� = %d", size);
	printf("\n������� ������� ����������� = %d", square_side);
	printf("\n������� ������ ����������� = %d", square_surface);
	return 0;
}