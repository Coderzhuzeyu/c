#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int arr[6] = { 0 };
//	printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ~a;//ȡa�Ķ�����ȡ��
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("b=%d a=%d\n", b, a);
//	//int b = --a;//ǰ��--����--����ʹ��
//	//printf("b=%d a=%d\n", b, a);
//	return 0;
//}


//int main()
//{
//	//int a = (int)3.14;//ǿ������ת��
//	int a = 3;
//	int b = 5;
//	if (a && b)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max=(a > b) ? (a) : (b);
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[4]);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//typedef unsigned int u_int;//typedef ����������
//int main()
//{
//	unsigned int age;
//	u_int age2;
//
//	return 0;
//}

//int mian()
//{
//	register int a = 0;//����aδ���ᱻƵ������ʹ��
//	return 0;
//}


//void test()
//{
//	static int a = 1;// static ���ξֲ�����
//	a++;
//	printf("%d\n", a);
//	
//}
//
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


//static �ı���ȫ�ֱ�����������-��С�ˣ�ֻ�����Լ����ڵ�.c�ļ���ʹ��
//extern int g_val;
//int main()
//{
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//static���κ���
//�ı��˺�����������
//ֻ�����Լ����ڵ�.c�ļ�ʹ��
//extern int Add(int x, int y);//extern �����ⲿ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#define MAX 10
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

int MAX(int x, int y)
{
	return (x > y ? x : y);
}

//#define�����
#define MAX(x,y) ((x)>(y)?(x):(y))

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//p��ָ�����
//	printf("%p\n", p);
//	printf("%p\n", &a);//ȡa�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'w';
//	printf("%c\n", *pc);
//	printf("%p\n", &ch);
//	printf("%p\n", pc);
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//*p = 20;//*-�����ò�������*p����a
//	printf("%d\n", *p);
//	return 0;
//}


int main()
{
	char ch = 'a';
	int a = 10;
	char*pc = &ch;
	int*pa = &a;
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pa));
	return 0;
}