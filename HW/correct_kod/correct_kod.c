#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int age;
	scanf_s("%d", &age);
	if (age < 13) {
		printf("%d - детство", age);
	}
	else if (age >= 14 && age < 25) {
		printf("%d - молодость", age);
	}
	else if (age >= 25 && age < 60) {
		printf("%d - зрелость", age);
	}
	else {
		printf("%d - старость", age);
	}
	return 0;
}