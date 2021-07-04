#include "figure.h"
#include "main.h"

char arr[] = "ABCDEFGH";

//Ввод буквы для пешки
int input_soldier_1()
{
	int lyubaya = 0;
here_01:
	scanf_s(" %c", &x);
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == x)
		{
			//Узнаём номер буквы в массиве, что бы позже использовать
			lyubaya = 1;
			letter_1 = i + 1;
			break;
		}

	}
	// Если ни одна буква не подходит , пользователь вводит букву ещё раз
	if (lyubaya != 1)
	{
		printf("Ошибка. Введите значение ещё раз :");
		goto here_01;
	}
	return (x);
}

// Ввод числа для пешки
int input_soldier_2()
{
here_1:

	scanf_s("%d", &y);
	// Проверка на то, подходит это число, или нет
	if (y > 8 || y < 1)
	{
		printf("Ошибка. Введите значение ещё раз :");
		goto here_1;
	}
	return (y);
}

//Ввод буквы для слона
int input_tower_1()
{
	int lyubaya = 0;
here_02: printf("\nВведите букву из координаты слона\n");
	scanf_s(" %c", &X);
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == X)
		{
			//Узнаём номер буквы в массиве, что бы позже использовать
			lyubaya = 1;
			letter_2 = i + 1;
			break;
		}

	}
	if (lyubaya != 1)
	{
		// Если ни одна буква не подходит , пользователь вводит букву ещё раз
		printf("Ошибка. Введите значение ещё раз :");
		goto here_02;
	}

	return (X);
}

// Ввод числа для пешки
int input_tower_2()
{
here_2:
	printf("\nВведите цифру из координаты слона\n");
	scanf_s("%d", &Y);
	// Проверка на то, подходит это число, или нет
	if (Y > 8 || Y < 1)
		goto here_2;

	return (Y);
}
