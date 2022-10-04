#include <stdio.h>
#include <math.h>
int main() {
	int x_1, x_2, x_3;
	printf("1: ");
	scanf_s("%d", &x_1);
	x_2 = x_1 + 1;
	x_3 = x_1 + 2;
	printf("2: %d", x_2);
	printf("\n3: %d", x_3);
	return 0;
}