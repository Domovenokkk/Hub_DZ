#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int age;
	scanf_s("%d", &age);
	if (age < 13) {
		printf("%d - �������", age);
	}
	else if (age >= 14 && age < 25) {
		printf("%d - ���������", age);
	}
	else if (age >= 25 && age < 60) {
		printf("%d - ��������", age);
	}
	else {
		printf("%d - ��������", age);
	}
	return 0;
}