#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	printf("請輸入兩個整數\n");
	scanf_s("%d%d", &a, &b);
	if (a % b == 0)
	{
		printf("%d is a multiple of the %d", a, b);
	}
	if (a % b != 0)
	{
		printf("%d is not a multiple of the %d", a, b);
	}
	system("pause");
	return 0;

}