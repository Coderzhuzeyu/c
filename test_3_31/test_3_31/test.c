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

//����һ���������
//struct Book
//{
//	char name[30];
//	double price;
//	char id[30];
//
//};
//int main()
//{
//	struct Book b1 = { "���Ӣ�۴�",55.62, "ISBN-10009300" };
//	struct Book* ps = &b1;
//	printf("������%s\n", (*ps).name);
//	printf("������%s\n", ps->name);
//	printf("���ۣ�%lf\n", ps->price);
//	//struct Book b2 = { "c���Գ������", 32.5, "ISBN-90923546" };
//	//printf("������%s\n", b1.name);
//	//printf("���ۣ�%lf\n", b1.price);
//	//printf("��ţ�%s\n", b1.id);
//	//printf("������%s\n", b2.name);
//	//printf("���ۣ�%lf\n", b2.price);
//	//printf("��ţ�%s\n", b2.id);
//	return 0;
//}


//int main()
//{
//	//int age = 10;
//	//if (age < 18)
//	//	printf("δ����\n");
//
//	//int age = 20;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//
//	int age = 16;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("������\n");
//	else if (age >= 60 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
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
//	//if (age = 5)//��ֵ���׳���
//	//{
//	//	printf("hehe\n");
//	//}
//	int age = 10;
//	if (5 == age)//�Ƚϳ����ͱ�����ֵ�Ƿ����ʱ���ѳ��������
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
//		printf("aΪ����\n");
//	}
//	else
//		printf("aΪż��\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		default://Ĭ��ѡ������ܰ�case��������
//			printf("�������\n");
//			break;
//	}
//	
//	return 0;
//}


int main()
{
	int i = 0;
	//whileѭ���е�continueָ������ѭ������Ĵ��룬������һ��ѭ��������ж�
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


