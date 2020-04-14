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
//	int b = ~a;//取a的二进制取反
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("b=%d a=%d\n", b, a);
//	//int b = --a;//前置--，先--，后使用
//	//printf("b=%d a=%d\n", b, a);
//	return 0;
//}


//int main()
//{
//	//int a = (int)3.14;//强制类型转换
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


//typedef unsigned int u_int;//typedef 类型重命名
//int main()
//{
//	unsigned int age;
//	u_int age2;
//
//	return 0;
//}

//int mian()
//{
//	register int a = 0;//假设a未来会被频繁大量使用
//	return 0;
//}


//void test()
//{
//	static int a = 1;// static 修饰局部变量
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


//static 改变了全局变量的作用域-变小了，只能在自己所在的.c文件中使用
//extern int g_val;
//int main()
//{
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//static修饰函数
//改变了函数的作用域
//只能在自己所在的.c文件使用
//extern int Add(int x, int y);//extern 声明外部符号
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

//#define定义宏
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
//	int* p = &a;//p是指针变量
//	printf("%p\n", p);
//	printf("%p\n", &a);//取a的地址
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
//	//*p = 20;//*-解引用操作符，*p就是a
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