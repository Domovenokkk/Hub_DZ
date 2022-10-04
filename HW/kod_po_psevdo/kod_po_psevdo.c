#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "russian");
	int x, y, z;
	printf("¬ведите x - ");
	scanf_s("%d", &x);
	printf("¬ведите y - ");
	scanf_s("%d", &y);
	printf("¬ведите z - ");
	scanf_s("%d", &z);
	if ((x != y) && (y != z) && (x != z)) {
		if ((x > y) && (x > z)) {
			z += x;
		}
		else if ((y > x) && (y > z)) {
			z += y;
		}
		else {
			z = pow(z, 2);
		}
		printf("%d", z);
	}
	else {
		if ((x == y) && (x == z) && (y == z)) {
			printf("%d %d %d", x, y, z);
		}
		else if (x == y) {
			printf("%d = %d", x, y);
		}
		else if (x == z) {
			printf("%d = %d", x, z);
		}
		else if (y == z) {
			printf("%d = %d", y, z);
		}
	}
	return 0;
}