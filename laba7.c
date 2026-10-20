#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, ".UTF8");

    int degree;

    printf("Введите степень двойки (10, 20, 30, 40, 50, 60): ");
    scanf("%d", &degree);

    switch (degree / 10) {
    case 1:
        printf("Соответствующая приставка: K (Кило)\n");
        break;
    case 2:
        printf("Соответствующая приставка: M (Мега) \n");
        break;
    case 3:
        printf("Соответствующая приставка: G (Гига) \n");
        break;
    case 4:
        printf("Соответствующая приставка: T (Тера) \n");
        break;
    case 5:
        printf("Соответствующая приставка: P (Пета) \n");
        break;
    case 6:
        printf("Соответствующая приставка: E (Экза) \n");
        break;
    default:
        printf("Ошибка: для данного диапазона степеней приставка не задана\n");
        break;
    }

    system("pause");

    
}
