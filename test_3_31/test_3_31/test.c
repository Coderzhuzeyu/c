#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//void test()
//{
//	static int a = 10;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;
//	printf("%d\n", *p);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//创建一个书的类型
//struct Book
//{
//	char name[30];
//	double price;
//	char id[30];
//
//};
//int main()
//{
//	struct Book b1 = { "射雕英雄传",55.62, "ISBN-10009300" };
//	struct Book* ps = &b1;
//	printf("书名：%s\n", (*ps).name);
//	printf("书名：%s\n", ps->name);
//	printf("定价：%lf\n", ps->price);
//	//struct Book b2 = { "c语言程序设计", 32.5, "ISBN-90923546" };
//	//printf("书名：%s\n", b1.name);
//	//printf("定价：%lf\n", b1.price);
//	//printf("书号：%s\n", b1.id);
//	//printf("书名：%s\n", b2.name);
//	//printf("定价：%lf\n", b2.price);
//	//printf("书号：%s\n", b2.id);
//	return 0;
//}


//int main()
//{
//	//int age = 10;
//	//if (age < 18)
//	//	printf("未成年\n");
//
//	//int age = 20;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//
//	int age = 16;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中老年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}


//int main()
//{
//	//int age = 10;
//	//if (age = 5)//赋值容易出错
//	//{
//	//	printf("hehe\n");
//	//}
//	int age = 10;
//	if (5 == age)//比较常量和变量的值是否相等时，把常量放左边
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == num % 2)
//	{
//		printf("a为奇数\n");
//	}
//	else
//		printf("a为偶数\n");
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	//int num = 1;
//	//while (num < 101)
//	//{
//	//	if (1 == num % 2)
//	//	{
//	//		printf("%d\n",num);
//	//	}
//	//	num++;
//	//}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//		default://默认选项，处理不能按case处理的情况
//			printf("输入错误\n");
//			break;
//	}
//	
//	return 0;
//}


int main()
{
	int i = 0;
	//while循环中的continue指跳过本循环后面的代码，进行下一次循环的入口判断
	while (i < 10)
	{
		if (5 == i)
			continue;
			//break;

		printf("%d ", i);
		i++;
	}
	return 0;
}


