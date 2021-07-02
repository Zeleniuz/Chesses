#include "figure.h"
#include "main.h"

char arr[] = "ABCDEFGH";

int input_soldier_1()
{
	int lyubaya = 0;
here_01:
	printf("\n¬ведите букву из координаты пешки\n");
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
here_1: printf("\n¬ведите цифру из координаты пешки\n");
	scanf_s("%d", &y);
	if (y > 8 && y < 1)
		goto here_1;
	return (y);
}

int input_tower_1()
{
	int lyubaya = 0;
here_02: printf("\n¬ведите букву из координаты слона\n");
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
here_2:
	printf("\n¬ведите цифру из координаты слона\n");
	scanf_s("%d", &Y);
	if (Y > 8 && Y < 1)
		goto here_2;
	return (Y);
}
