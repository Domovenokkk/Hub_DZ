#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int x1, x2, x3, y1, y2, y3;
	float square, side_1, side_2, side_3, perimetr, pol_perimetr;
	printf("Координата x1 = ");
	scanf_s("%d", &x1);
	printf("Координата x2 = ");
	scanf_s("%d", &x2);
	printf("Координата x3 = ");
	scanf_s("%d", &x3);
	printf("Координата y1 = ");
	scanf_s("%d", &y1);
	printf("Координата y2 = ");
	scanf_s("%d", &y2);
	printf("Координата y3 = ");
	scanf_s("%d", &y3);

	if (((x1 == x2) && (x1 == x3) && (x2 == x3)) || ((y1 == y2) && (y2 == y3) && (y3 == y1)))
	{
		square = 0;
		perimetr = 0;
	}
	else
	{
		side_1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		side_2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		side_3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
		perimetr = side_1 + side_2 + side_3;
		pol_perimetr = (float)perimetr / 2;
		square = sqrt(pol_perimetr * (pol_perimetr - side_1) * (pol_perimetr - side_2) * (pol_perimetr - side_3));
	}

	printf("%f", perimetr);
	printf("\n%f", square);
	return 0;
}