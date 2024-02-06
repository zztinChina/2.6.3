#include<stdio.h>
int main()
{
	int n = 1;
	do{
		printf("输入1开始计算//输入零退出循环");
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		int year = 0;
		printf("请输入年月日");
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
			printf("您需要再看看日历，以确保您输入的日期正确");
			continue;
		}
		if (arr[month - 1] < day)
		{
			printf("您需要再看看日历，以确保您输入的日期正确");
			continue;
		}
		for (i = 0; i < month - 1; i++)
		{
			ret = ret + arr[i];
		}
		ret = ret + day;
		if (year % 4 == 0 && year % 100 != 0 || year / 400 == 0)
		{
			printf("您输入的是这一年的第%d天", ret);
		}
		else if (month==2&&day>=29)
		{
			printf("您需要再看看日历，以确保您输入的日期正确");
			continue;
		}
		else if (month <= 2)
		{
			printf("您输入的是这一年的第%d天",ret);
		}
		else if (month >= 3)
		{
			printf("您输入的是这一年的第%d天", ret - 1);
		}
	} while (n!=0);
	return 0;
}