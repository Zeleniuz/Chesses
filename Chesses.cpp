#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N = 10
char x, X;
int y, Y;
char arr[] = "ABCDEFGH";
int letter_1, letter_2;


int input_soldier_1()
{
	int lyubaya = 0;
here_01: printf("\nВведите букву из координаты пешки\n");
	scanf_s(" %c", &x);
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == x)
		{
			lyubaya = 1;
			letter_1 = i + 1;
			break;
		}

	}
	if (lyubaya != 1)
	{
		goto here_01;
	}

	return (x);
}

int input_soldier_2()
{
here_1: printf("\nВведите цифру из координаты пешки\n");
	scanf_s("%d", &y);
	if (y > 8 or y < 1)
		goto here_1;
	return (y);
}

int input_tower_1()
{
	int lyubaya = 0;
here_02: printf("\nВведите букву из координаты слона\n");
	scanf_s(" %c", &X);
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == X)
		{
			lyubaya = 1;
			letter_2 = i + 1;
			break;
		}

	}
	if (lyubaya != 1)
	{
		goto here_02;
	}

	return (X);
}

int input_tower_2()
{
here_2: printf("\nВведите цифру из координаты слона\n");
	scanf_s("%d", &Y);
	if (Y > 8 or Y < 1)
		goto here_2;
	return (Y);
}

int main()
{
	char o, O, p, P;
	int letter;
	setlocale(LC_ALL, "Rus");
	here:
	o = input_soldier_1();
	p = input_soldier_2();
	O = input_tower_1();
	P = input_tower_2();
	
	if (o == O and p == P)
	{
		printf("Значения совпадают. Введите новые : ");
		goto here;
	}

	if (o == O)
		printf("Слон бъёт пешку\n");
	if (p == P)
		printf("Слон бъёт пешку\n");

	printf("\n Координаты пешки (i на доске) : %c%d\n", o, p);
	printf("\n Координаты слона (I на доске) : %c%d\n\n", O, P);


	for (int i = 0; i <= 8; i++)
	{
		if (i > 0)
			printf(" %c  ", arr[i - 1]);
		for (int j = 0; j <= 8; j++)
		{
			if (i == 0)
				printf("    ");
			if (j == 0 and i == 0)
				for (int k = 1; k <= 8; k++)
					printf(" %d  ", k);
			if (j > 0 and i > 0)
				if (letter_1 == i and p == j)
					printf("[i] ");
				else
					if (letter_2 == i and P == j)
						printf("[I] ");

					else
						if (i % 2 == 1 and j % 2 == 1)

							printf("[#] ");
						else
							if (i % 2 == 0 and j % 2 == 0)

								printf("[#] ");
							else
								printf("[ ] ");

		}
		printf("\n");
		printf("\n");
	}
}