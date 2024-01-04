#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

void hw1(void);
void hw2(void);
void hw3(void);
void hw4(void);
void hw5(void);
void hw6(void);
void hw7(void);
void hw8(void);
void hw9(void);
void hw10(void);

int main()
{

	//hw1();
	//hw2();
	//hw3();
	//hw4();
	//hw5();
	//hw6();
	//hw7();
	//hw8();
	hw9();
	//hw10();

	return 0;
}

void hw1(void)
{
	int score[3] = { 80, 90, 80 };
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", score[i]);
	}
}

void hw2(void)
{
	int arr[5] = {2, 3, 12, 13, 15};
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 3 == 0)
		{
			sum += arr[i];
		}
	}
	printf("sum = %d", sum);
}

void hw3(void)
{
	int score[10] = { 0 };
	int sum = 0,count = 0;
	printf("����ɼ�:");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] > 0)
		{
			sum += score[i];
			count++;
		}
	}
	printf("ƽ������Ϊ��%d", sum / 10);

}

void hw4(void)
{
	int score[6] = { 0 };
	int temp = 0, sum = 0;
	printf("����ɼ�:\n");
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-i; j++)
		{
			if (score[j] > score[j + 1])
			{
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
		}
	}
	for (int x = 0; x < 6; x++)
	{
		sum += score[x];
	}
	printf("��߷֣�%d\n��ͷ֣�%d\nƽ���֣�%d\n", score[5], score[0], sum / 6);
}

void hw5(void)
{
	int num[10] = { 0 };
	int count1 = 0, count2 = 0, count3 = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] > 0)
		{
			count1++;
		}
		else if (num[i] < 0)
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}
	printf("����%d��������%d��������%d����\n", count1, count2, count3);
}

void hw6(void)
{
	for (int i = 1; i <= 4; i++)
	{
		for (int k = 1; k <= 4-i; k++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= 4; i++)
	{
		for (int k = 1; k <= i - 1; k++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 9 - 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void hw7(void)
{
	int year, mon, day;
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("���������ڣ�");
	int f = scanf("%d.%d.%d", &year, &mon, &day);

	while (f == 3)
	{
		int num = 0;

		if (mon > 12||mon < 1)
		{
			printf("�·�����\n");
			break;
		}

		if (day > a[mon]||day <1)
		{
			printf("��������\n");
			break;
		}

		for (int i = 1; i < mon; i++)
		{
			num += a[i];
		}
		num += day;

		if (mon > 2 && (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)))
		{
			num++;
		}

		printf("%d��%d��%d����%d��ĵ�%d��\n", year, mon, day, year, num);
		printf("\n����������(q�˳�)��");
		f = scanf("%d.%d.%d", &year, &mon, &day);
	}

	printf("\nEND\n");
	
}

void hw8(void)
{
	int num = 1;

	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 33; j++)
		{
			int k = 100 - i - j;

			if (((i * 5) + (j * 3) + (k / 3) == 100) && k % 3 == 0)
			{
				printf("������%d\n������%d  ĸ����%d  С����%d\n", num++, i, j, k);
			}
		}
	}
}

void hw9(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num, sum = 0;
	printf("�������֣�");
	int a = scanf("%d", &num);
	while (a == 1)
	{
		int  flag = 0;

		for (int i = 0; i < 10 - 1; i++)
		{
			for (int j = i + 1; j < 10; j++)
			{
				sum = arr[i] + arr[j];

				if (num < sum)
				{
					flag = 1;

					printf("%d+%d=%d\n", arr[i], arr[j], sum);
				}
			}
		}
		if (flag == 1)
		{
			printf("����\n");
		}
		else
		{
			printf("������\n");
		}

		printf("��������(q�˳�)��");
		a = scanf("%d", &num);
	}

	printf("END\n");
}

void hw10(void)
{
	int num = 0;

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			for (int k = 1; k < 5; k++)
			{
				if (i != j && i != k & j != k)
				{
					printf("%d%d%d\n", i, j, k);
					num++;
				}
			}
		}
	}
	printf("����%d��\n", num);
}