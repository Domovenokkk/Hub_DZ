#include <stdio.h>
#include <malloc.h>

int main() {
	char** s;
	s = (char**)malloc(sizeof(char**));
	puts(*s);
	printf("%s", *s);
}