#include<stdio.h>
int main()
{
	int n = 1;
	do{
		printf("����1��ʼ����//�������˳�ѭ��");
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		int year = 0;
		printf("������������");
		scanf_s("%d", &year);
		int month = 0;
		scanf_s("%d", &month);
		int day = 0;
		scanf_s("%d", &day);
		int arr[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
		int i = 0;
		int ret = 0;
		if (month > 12 || month <= 0)
		{
			printf("����Ҫ�ٿ�����������ȷ���������������ȷ");
			continue;
		}
		if (arr[month - 1] < day)
		{
			printf("����Ҫ�ٿ�����������ȷ���������������ȷ");
			continue;
		}
		for (i = 0; i < month - 1; i++)
		{
			ret = ret + arr[i];
		}
		ret = ret + day;
		if (year % 4 == 0 && year % 100 != 0 || year / 400 == 0)
		{
			printf("�����������һ��ĵ�%d��", ret);
		}
		else if (month==2&&day>=29)
		{
			printf("����Ҫ�ٿ�����������ȷ���������������ȷ");
			continue;
		}
		else if (month <= 2)
		{
			printf("�����������һ��ĵ�%d��",ret);
		}
		else if (month >= 3)
		{
			printf("�����������һ��ĵ�%d��", ret - 1);
		}
	} while (n!=0);
	return 0;
}