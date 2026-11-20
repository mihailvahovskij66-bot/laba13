//вариант 6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(void)
{
    char name[50];
    int i;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    printf("Введите имя: ");
    if (scanf("%49s", name) != 1)
        return 0;
    for (i = 1; name[i] != '\0'; i++)
        name[i] = name[i + 1];
    printf("Привет, %s!\n", name);
    return 0;
}