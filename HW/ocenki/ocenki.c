#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int mark1, mark2, mark3;
	printf("������� ���� ������: ");
	scanf_s("%d %d %d", &mark1, &mark2, &mark3);
	if ((mark1 == 5) && (mark2 == 5) && (mark3 == 5)) {
		printf("�� ��������");
	}
	else if ((mark1 == 3) || (mark2 == 3) || (mark3 == 3)) {
		printf("�� ��������");
	}
	else if ((mark1 == 2) || (mark2 == 2) || (mark3 == 2) || (mark1 == (-1)) || (mark2 == (-1)) || (mark3 == (-1))) {
		printf("�� �� �����");
	}
	else {
		printf("�� ��������");
	}
	return 0;

}