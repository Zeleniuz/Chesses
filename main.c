#include "main.h"

char ar[] = "ABCDEFGH";
int num = 1;

int main()
{
	char o, O, p, P, u, U, h, H, s, S, g, G;
	setlocale(LC_ALL, "Rus");

	// ���� ��������� ��� �����
	O = input_tower_1();
	P = input_tower_2();

	// ���� ��������� ��� ����� 1
here_1:
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	o = input_soldier_1();
	int o_1 = letter_1;
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	p = input_soldier_2();
	//�������� �� ���������� �� ����� ������ �� ������
	if ((o == O) && (p == P))
	{
		printf("�������� ���������. ������� ����� : ");
		goto here_1;
	}
	num++;

here_2:
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	g = input_soldier_1();
	int g_1 = letter_1;
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	G = input_soldier_2();
	if ((g == O) && (G == P))
	{
		printf("�������� ���������. ������� ����� : ");
		goto here_2;
	}

	num++;

here_3:
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	u = input_soldier_1();
	int u_1 = letter_1;
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	U = input_soldier_2();
	if (u == O && U == P)
	{
		printf("�������� ���������. ������� ����� : ");
		goto here_3;
	}

	num++;

here_4:
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	h = input_soldier_1();
	int h_1 = letter_1;
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	H = input_soldier_2();
	if (h == O && H == P)
	{
		printf("�������� ���������. ������� ����� : ");
		goto here_4;
	}

	num++;

here_5:
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	s = input_soldier_1();
	int s_1 = letter_1;
	printf("\n������� ����� �� ���������� ����� %d �����\n", num);
	S = input_soldier_2();
	if (s == O && S == P)
	{
		printf("�������� ���������. ������� ����� : ");
		goto here_5;
	}

	num++;

	//�������� �� ��, ���� �� ���� �����
	if ((o == O) || (p == P))
	{
		printf("\n              ---------\n");
		printf("\n         [ ���� ���� ����� 1 ]\n");
		printf("\n              ---------\n");
	}
	if ((g == O) || (G == P))
	{
		printf("\n              ---------\n");
		printf("\n         [ ���� ���� ����� 2 ]\n");
		printf("\n              ---------\n");
	}
	if (u == O || U == P)
	{
		printf("\n              ---------\n");
		printf("\n         [ ���� ���� ����� 3 ]\n");
		printf("\n              ---------\n");
	}
	if (h == O || H == P)
	{
		printf("\n              ---------\n");
		printf("\n         [ ���� ���� ����� 4 ]\n");
		printf("\n              ---------\n");
	}

	if (s == O || S == P)
	{
		printf("\n              ---------\n");
		printf("\n         [ ���� ���� ����� 5 ]\n");
		printf("\n              ---------\n");
	}
// ����� ���� �������� ������ ��� ������������
	printf("\n ���������� ����� 1 (i �� �����) : %c%d \n", o, p);
	printf("\n ���������� ����� 2 (i �� �����) : %c%d \n", g, G);
	printf("\n ���������� ����� 3 (i �� �����) : %c%d \n", u, U);
	printf("\n ���������� ����� 4 (i �� �����) : %c%d \n", h, H);
	printf("\n ���������� ����� 5 (i �� �����) : %c%d \n", s, S);
	printf("\n ���������� ����� (I �� �����) : %c%d \n\n", O, P);

// ����� �� �����, ���� ��������, ������������� �� ��������� ���������
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