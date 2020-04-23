#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	printf("请输入三个数：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a, a = b, b = t;
//	}
//	if (a < c)
//	{
//		t = a, a = c, c = t;
//	}
//	if (b < c)
//	{
//		t = b, b = c, c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 3;
//	while (i < 101)
//	{
//		printf("%d ",i);
//		i += 3;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	int i = 0;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		t = a, a = b, b = t;
//		i = b;
//	}
//	else
//		i = b;
//	while (i > 0)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("最大公约数为：%d\n", i);
//			break;
//		}
//		else
//			i--;
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 1000;
//	while (i < 2001)
//	{
//		printf("%d ",i);
//		i += 4;
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i++)
	{
		for (j = 2; j<i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
}
