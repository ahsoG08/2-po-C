#include <stdio.h>

int main() {
    // Вывод заголовков строк
    printf("   ");
    for (int i = 1; i <= 9; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    // Вывод разделительной линии
    printf("  +");
    for (int i = 1; i <= 9; i++) {
        printf("---");
    }
    printf("\n");

    // Вывод основной таблицы
    for (int i = 1; i <= 9; i++) {
        // Вывод заголовка столбца
        printf("%d |", i);
        
        // Вывод значений умножения
        for (int j = 1; j <= 9; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }

    return 0;
}
