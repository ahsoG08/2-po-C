#include <stdio.h>

void print_spaces(int n) {
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
}

void print_stars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int X;
    printf("Введите количество уровней ёлочки (X): ");
    scanf("%d", &X);

    // Рисуем уровни ёлочки
    for (int level = 1; level <= X; level++) {
        print_spaces(X - level);
        print_stars(2 * level - 1);
    }

    // Рисуем ствол
    for (int i = 1; i < X; i++) {
        print_spaces(X - 1);
        print_stars(1);
    }

    return 0;
}
