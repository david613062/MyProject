#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, i;
	
	printf("numbeer    square     cube\n");
	
	for (i = 0; i <= 10; i++)
	{
         a=i * i;
		 b = i * i*i;
		 printf("%-3d        %-3d        %-4d\n",i,a,b);
	    
		
	}

	system("pause");
	return 0;
}