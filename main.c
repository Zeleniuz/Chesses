#include "main.h"

char ar[] = "ABCDEFGH";

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

	if (o == O && p == P)
	{
		printf("�������� ���������. ������� ����� : ");
		goto here;
	}

	if (o == O & p == P)
		printf("\n\n                 [���� ���� �����]\n\n");
	else
		printf("\n\n                 [���� �� ���� �����]\n\n");

	printf("\n ���������� ����� (i �� �����) : %c%d\n", o, p);
	printf("\n ���������� ����� (I �� �����) : %c%d\n\n", O, P);


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
				if (letter_1 == i && p == j)
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