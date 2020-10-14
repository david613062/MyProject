#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("叫块俱计\n");

	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d琌案计", a);
	}
	else
	{
		printf("%d琌计", a);
	}
	system("pause");
	return 0;

}
