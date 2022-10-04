#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int x, y, summ, residual, multiplication, summ_kv, summ_mod, div_1, div_2;
	float sr_mod, sr_kv, div;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);
	if (x > y) {
		div_1 = x / y;
		div_2 = x - (div_1 * y);
	}
	else {
		div_1 = y / x;
		div_2 = y - (div_1 * x);
	}
	summ = x + y;
	residual = x - y;
	multiplication = x * y;
	div = (float)x / y;
	summ_kv = pow(x, 2) + pow(y, 2);
	summ_mod = abs(x) + abs(y);
	sr_kv = (float)summ_kv / 2;
	sr_mod = (float)summ_mod / 2;
	printf("%d %d %d %.2f %.2f %d", summ, residual, multiplication, sr_mod, sr_kv, div_2);
	printf("\nСумма = %d", summ);
	printf("\nРазность = %d", residual);
	printf("\nПроизведение = %d", multiplication);
	printf("\nСреднее арифметическое модулей = %.2f", sr_mod);
	printf("\nСреднее арифметическое квадратов = %.2f", sr_kv);
	printf("\nЦелый остаток от деления = %d", div_2);
	return 0;
}