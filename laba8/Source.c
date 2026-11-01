#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

void task0();
void task1();
void task2();
void task3();

int main()
{
	setlocale(LC_ALL, "RUS");
	task0();
	task1();
	task2();
    task3();
}

void task0()
{
    int count;
    char symbol;

    printf("Введите количество символов: ");
    scanf("%d", &count);

    getchar();

    printf("Введите символ для печати: ");
    scanf("%c", &symbol);

    printf("\n1. Базовый вывод\n");
    for (int start = 1; start <= count; start++) 
    {
        putchar(symbol);
    }
    printf("\n");

    printf("\n2. С плюсами в начале и в конце\n");
    putchar('+');
    for (int i = 1; i <= count; i++) 
    {
        putchar(symbol);
    }
    putchar('+');
    printf("\n");

    printf("\n3. Первая половина одним, вторая другим\n");
    for (int i = 1; i <= count / 2; i++) 
    {
        putchar(symbol);
    }
    for (int i = 1; i <= count - (count / 2); i++) 
    {
        putchar('#');
    }
    printf("\n");

    printf("\n4. С восклицательным знаком после каждого символа\n");
    for (int i = 1; i <= count; i++) 
    {
        putchar(symbol);
        putchar('!');
    }
    printf("\n\n");
}
void task1()
{
    int n, m;
    int s = 0;
    int k = 1;

    printf("Введите число m (начало): ");
    scanf("%d", &m);
    printf("Введите число n (конец): ");
    scanf("%d", &n);

    int start = (m > n) ? m : n;
    int end = (m > n) ? n : m;

    for (int i = start; i >= end; i--) 
    {
        s += i;
        printf("выполнено %d раз\n", k);
        k++;
    }

    printf("результат %d\n\n", s);
}
void task2()
{
    double step;
    double start = 2.0;
    double end = 4.0;

    printf("Табулирование функции: y = 2^x - 2x^2 - 1\n");
    printf("Отрезок: [2; 4]\n\n");

    printf("Введите шаг табуляции (например, 0.5 или 0.2): ");
    scanf("%lf", &step);

    if (step <= 0) 
    {
        printf("Ошибка: шаг должен быть больше нуля!\n");
    }

    printf("\n-----------------------\n");
    printf("|   x   |    f(x)     |\n");
    printf("-----------------------\n");

    for (double x = start; x <= end + 0.000001; x += step) 
    {
        double y = pow(2, x) - 2 * pow(x, 2) - 1;
        printf("| %5.2f | %11.4f |\n", x, y);
    }

    printf("-----------------------\n\n");
}
void task3()
{
    int n;
    printf("Введите целое число n: ");
    scanf("%d", &n);

    double sum = 0.0;

    for (int i = 0; i <= n; i++) 
    {
        double sign = (i % 2 == 0) ? 1.0 : -1.0;
        double denominator = pow(2, i);

        sum += sign * (1.0 / denominator);
    }
    printf("Результат вычисления суммы: %.6f\n", sum);
}