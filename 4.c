#include <stdio.h>

int main() {
    int number, binnum[32], y = 0;
    scanf("%d", &number);

    // Если число отрицательное, переводим в дополнительный код
    if (number < 0) {
        printf("-"), number = -number;
    }

    // Переводим число в двоичную систему
    while (number > 0) {
        binnum[y] = number % 2;
        number = number / 2;
        y++;
    }

    // Выводим двоичное представление
    for (int j = y- 1; j >= 0; j--) {
        printf("%d", binnum[j]);
    }

    return 0;
}