#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int side, b, c, square_side, square_surface, size;
	printf("Сторона = ");
	scanf_s("%d", &side);
	b = pow(side, 2);
	c = pow(side, 3);
	square_side = 4 * b;
	square_surface = 6 * b;
	size = c;
	printf("Объем = %d", size);
	printf("\nПлощадь боковой поверхности = %d", square_side);
	printf("\nПлощадь полной поверхности = %d", square_surface);
	return 0;
}