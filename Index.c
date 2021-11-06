#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int plus(int a, int b);

int minus(int a, int b);
int unm(int a, int b);
int delit(int a, int b);

int main()
{
	int x, y;
	char znak;

	printf("(+, -, *, /) \n>");
	scanf("%c", &znak);
	
	if(znak == '+')
	{
		printf("1 number \n>");
		scanf("%d", &x);

		printf("2 number \n>");
		scanf("%d", &y);

		plus(x, y);
	}
	if(znak == '-')
	{
		printf("1 number \n>");
		scanf("%d", &x);

		printf("2 number \n>");
		scanf("%d", &y);

		minus(x, y);
	}
	if(znak == '*')
	{
		printf("1 number \n>");
		scanf("%d", &x);

		printf("2 number \n>");
		scanf("%d", &y);

		unm(x, y);
	}
	if(znak == '/')
	{
		printf("1 number \n>");
		scanf("%d", &x);

		printf("2 number \n>");
		scanf("%d", &y);

		delit(x, y);
	}
	return 0;
}

int plus(int a, int b)
{
	int res = a + b;

	printf("%d + %d = %d\n",a, b ,res);
	
	return 0;
}
int minus(int a, int b)
{
	int res = a - b;

	printf("%d - %d = %d", a, b, res);

	return 0;
}
int delit(int a, int b)
{
	int res = a / b;

	printf("%d / %d = %d", a, b, res);

	return 0;
}
int unm(int a, int b)
{
	int res;
	res = a * b;

	printf("%d * %d = %d", a, b, res);

	return res;
}
