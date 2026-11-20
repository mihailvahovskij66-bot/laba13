#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
int main(void)
{
    char name[33], greeting[100];
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    printf("Введите имя (до 32 букв): ");
    if (scanf("%32s", name) != 1)
        return 0;
    _strupr(name);
    strcpy(greeting, "Привет, ");
    strcat(greeting, name);
    while (strlen(greeting) < 40)
        strcat(greeting, "!");
    puts(greeting);
    return 0;
}