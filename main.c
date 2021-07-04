#include "main.h"

char ar[] = "ABCDEFGH";
int num = 1;

int main()
{
	char o, O, p, P, u, U, h, H, s, S, g, G;
	setlocale(LC_ALL, "Rus");

	// Ввод координат для слона
	O = input_tower_1();
	P = input_tower_2();

	// Ввод координат для пешки 1
here_1:
	printf("\nВведите букву из координаты номер %d пешки\n", num);
	o = input_soldier_1();
	int o_1 = letter_1;
	printf("\nВведите цифру из координаты номер %d пешки\n", num);
	p = input_soldier_2();
	//Проверка на нахождении на одной клетке со слоном
	if ((o == O) && (p == P))
	{
		printf("Значения совпадают. Введите новые : ");
		goto here_1;
	}
	num++;

here_2:
	printf("\nВведите букву из координаты номер %d пешки\n", num);
	g = input_soldier_1();
	int g_1 = letter_1;
	printf("\nВведите цифру из координаты номер %d пешки\n", num);
	G = input_soldier_2();
	if ((g == O) && (G == P))
	{
		printf("Значения совпадают. Введите новые : ");
		goto here_2;
	}

	num++;

here_3:
	printf("\nВведите букву из координаты номер %d пешки\n", num);
	u = input_soldier_1();
	int u_1 = letter_1;
	printf("\nВведите цифру из координаты номер %d пешки\n", num);
	U = input_soldier_2();
	if (u == O && U == P)
	{
		printf("Значения совпадают. Введите новые : ");
		goto here_3;
	}

	num++;

here_4:
	printf("\nВведите букву из координаты номер %d пешки\n", num);
	h = input_soldier_1();
	int h_1 = letter_1;
	printf("\nВведите цифру из координаты номер %d пешки\n", num);
	H = input_soldier_2();
	if (h == O && H == P)
	{
		printf("Значения совпадают. Введите новые : ");
		goto here_4;
	}

	num++;

here_5:
	printf("\nВведите букву из координаты номер %d пешки\n", num);
	s = input_soldier_1();
	int s_1 = letter_1;
	printf("\nВведите цифру из координаты номер %d пешки\n", num);
	S = input_soldier_2();
	if (s == O && S == P)
	{
		printf("Значения совпадают. Введите новые : ");
		goto here_5;
	}

	num++;

	//Проверка на то, бьёт ли слон пешку
	if ((o == O) || (p == P))
	{
		printf("\n              ---------\n");
		printf("\n         [ Слон бьёт пешку 1 ]\n");
		printf("\n              ---------\n");
	}
	if ((g == O) || (G == P))
	{
		printf("\n              ---------\n");
		printf("\n         [ Слон бьёт пешку 2 ]\n");
		printf("\n              ---------\n");
	}
	if (u == O || U == P)
	{
		printf("\n              ---------\n");
		printf("\n         [ Слон бьёт пешку 3 ]\n");
		printf("\n              ---------\n");
	}
	if (h == O || H == P)
	{
		printf("\n              ---------\n");
		printf("\n         [ Слон бьёт пешку 4 ]\n");
		printf("\n              ---------\n");
	}

	if (s == O || S == P)
	{
		printf("\n              ---------\n");
		printf("\n         [ Слон бьёт пешку 5 ]\n");
		printf("\n              ---------\n");
	}
// Вывод всех заданных данных для пользователя
	printf("\n Координаты пешки 1 (i на доске) : %c%d \n", o, p);
	printf("\n Координаты пешки 2 (i на доске) : %c%d \n", g, G);
	printf("\n Координаты пешки 3 (i на доске) : %c%d \n", u, U);
	printf("\n Координаты пешки 4 (i на доске) : %c%d \n", h, H);
	printf("\n Координаты пешки 5 (i на доске) : %c%d \n", s, S);
	printf("\n Координаты слона (I на доске) : %c%d \n\n", O, P);

// Вывод на доску, дабы сравнить, действительно ли результат совпадает
	for (int i = 0; i <= 8; i++)
	{
		if (i > 0)
			printf(" %c  ", ar[i - 1]);
		for (int j = 0; j <= 8; j++)
		{
			if (i == 0)
				printf("    ");
			if (j == 0 && i == 0)
				for (int k = 1; k <= 8; k++)
					printf(" %d  ", k);
			if (j > 0 && i > 0)
				if (o_1 == i && p == j)
					printf("[i] ");
				else
					if (g_1 == i && G == j)
						printf("[i] ");
					else
						if (u_1 == i && U == j)
							printf("[i] ");
						else
							if (h_1 == i && H == j)
								printf("[i] ");
							else
								if (s_1 == i && S == j)
									printf("[i] ");
								else
									if (letter_2 == i && P == j)
										printf("[I] ");

									else
										if (i % 2 == 1 && j % 2 == 1)

											printf("[#] ");
										else
											if (i % 2 == 0 && j % 2 == 0)

												printf("[#] ");
											else
												printf("[ ] ");

		}
		printf("\n");
		printf("\n");
	}
}