#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double a,b,c,d,e,f;
	printf("�п�J�@��Ѫ��`���{��\n");
	scanf_s("%lf", &a);
	printf("�п�J�T�o�@����/�[�ڦh�ֿ�\n");
	scanf_s("%lf", &b);
	printf("�п�J�����@����/�[�گ��p�h�֤���\n");
	scanf_s("%lf", &c);
	printf("�п�J�@�Ѫ������O\n");
	scanf_s("%lf", &d);
	printf("�п�J�@�Ѫ��q��O(�L���O)\n");
	scanf_s("%lf", &e);
	f = ((a/c)*b)+d+e;
	printf("�`��O�O%f", f);
	system("pause");
	return 0;
}