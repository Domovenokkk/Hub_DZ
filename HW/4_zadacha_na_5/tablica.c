#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include <windows.h>

void draw_table() {
    int stolbik = 0, stroki = 0, maxlen;
    char c;
    printf("¬ведите число столбцов таблицы: ");
    scanf_s("%d", &stolbik);
    char** title = (char**)malloc(sizeof(char*) * stolbik);
    for (int i = 0; i < stolbik; i++) {
        title[i] = (char*)malloc(sizeof(char) * 100);
    }
    for (int i = 0; i < stolbik; i++) {
        for (int j = 0; j < 100; j++) {
            title[i][j] = '\0';
        }
    }
    printf("¬ведите заголовки таблицы:\n");
    getchar();
    for (int i = 0; i < stolbik; i++) {
        int j = 0;
        while ((c = getchar()) != '\n' && j < 99) {
            title[i][j] = c;
            j++;
        }
    }
    printf("\n");
    printf("¬ведите количество строк таблицы: ");
    scanf_s("%d", &stroki);
    int** line = (int**)malloc(sizeof(int*) * stolbik);
    for (int i = 0; i < stolbik; i++) {
        line[i] = (int*)malloc(sizeof(int) * stroki);
    }
    for (int i = 0; i < stolbik; i++) {
        printf("¬ведите данные дл€ заполнени€ столбца %s: ", title[i]);
        for (int j = 0; j < stroki; j++) {
            scanf_s(" %d", &line[i][j]);
        }
    }
    printf("\n");
    int* columnlen = (int*)malloc(sizeof(int) * stolbik);
    for (int i = 0; i < stolbik; i++) {
        maxlen = 0;
        if (maxlen < strlen(title[i])) {
            maxlen = strlen(title[i]);
        }
        for (int k = 0; k < stolbik; k++) {
            if (maxlen < intlen(line[i][k])) {
                maxlen = intlen(line[i][k]);
            }
        }
        columnlen[i] = maxlen;
    }
    printf("¬аша таблица:\n");
    for (int i = 0; i < stolbik; i++) {
        printf("|");
        printf("%s", title[i]);
        for (int k = 0; k < (columnlen[i] - strlen(title[i])); k++) {
            printf(" ");
        }
    }
    printf("|");
    for (int j = 0; j < stroki; j++) {
        printf("\n");
        printf("|");
        for (int i = 0; i < stolbik; i++) {
            printf("%d", line[i][j]);
            for (int k = 0; k < (columnlen[i] - intlen(line[i][j])); k++) {
                printf(" ");
            }
            printf("|");
        }
    }
    printf("\n");

    for (int i = 0; i < stolbik; i++) {
        free(title[i]);
    }
    free(title);
    for (int i = 0; i < stolbik; i++) {
        free(line[i]);
    }
    free(line);
    free(columnlen);
}

int main() {
    setlocale(LC_ALL, "russian");
    draw_table();
}