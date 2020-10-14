#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double a,b,c,d,e,f;
	printf("請輸入一整天的總里程數\n");
	scanf_s("%lf", &a);
	printf("請輸入汽油一公升/加侖多少錢\n");
	scanf_s("%lf", &b);
	printf("請輸入平均一公升/加侖能行駛多少公里\n");
	scanf_s("%lf", &c);
	printf("請輸入一天的停車費\n");
	scanf_s("%lf", &d);
	printf("請輸入一天的通行費(過路費)\n");
	scanf_s("%lf", &e);
	f = ((a/c)*b)+d+e;
	printf("總花費是%f", f);
	system("pause");
	return 0;
}