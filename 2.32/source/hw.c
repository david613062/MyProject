#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double a, b, c,d;
	printf("�п�J�A���魫(����)�B����(����)\n");
	scanf_s("%lf%lf",&a,&b);
	d = b / 100;
	c = a / (d * d);
	printf("�A��BMI�O%f\n",c);
	if (c < 18.5)
	{
		printf("you are underweight");
	}
	if (18.5 < c && c < 24.9)
	{
		printf("you are normal");
	}
	if (25 < c && c < 29.9)
	{
		printf("you are overweight");
	}
	if (c >30)
	{
		printf("you are obese");
	}


	system("pause");
	return 0;

}