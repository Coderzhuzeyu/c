#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//递归


//int main()
//{ 
//	printf("hehe\n");
//	main();
//	return 0;
//}


////输出一个无符号整型，并按顺序输出每一位
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//123
//	Print(num);
//	return 0;
//}

#include<string.h>
////编写函数不允许创建临时变量，求字符串函数
////int my_strlen(char* str)
////{
////	int count = 0;
////	while(*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
//int my_strlen(char* str)
//{
//		if (*str != '\0')
//		{
//			return 1 + my_strlen(str + 1);
//		}
//		else
//		{
//			return 0;
//		}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//数组名是首元素地址
//	printf("%d\n", len);
//	//my_strlen("bit");
//	//1 + my_strlen("it");
//	//1 + 1 + my_strlen("t");
//	//1 + 1 + 1 + my_strlen("");
//	//1 + 1 + 1 + 0;
//	return 0;
//}


//int main()
//{
//	int t = 1;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &i);
//	for (n = 1; n <= i; n++)
//	{
//		t *= n;
//	}
//	printf("%d\n",t);
//	return 0;
//}


////递归求n的阶乘
//int Fac(int i)
//{
//	if (i <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return i*Fac(i - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
//int count = 0;
//int Fib(int i)
//{
//	if (i == 3);
//	{
//		count++;
//	}
//	if (i <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(i - 1) + Fib(i - 2);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);//第n个斐波那契数求取是不是适合使用递归求解
//	printf("%d %d\n", ret, count);
//	return 0;
//}

//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);//第n个斐波那契数求取是不是适合使用递归求解
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int arr[100];
//	char ch[5];
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr3[] = { 1, 2, 3 };
//	char arr4[] = { 'a', 'b', 'c' };
//	char arr5[] = { 'a', 98, 'c' };
//	char arr6[] = { "abc" };
//	printf("%d\n", strlen(arr5));//n
//	printf("%d\n", strlen(arr6));//3
//	printf("%d\n", sizeof(arr5));//3
//	printf("%d\n", sizeof(arr6));//4
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[4]);
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[4]);
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//	return 0;
//}

int main()
{
	int arr[3][4] = {1,2,3,4,5};//三行四列
	int arr1[3][4] = { { 1,2 },{ 3,4 },{ 5 } };
	int arr1[][4] = { { 1, 2 }, { 3, 4 }, { 5 } };//下标可以省略行下标
	//char ch[3][5];
	return 0;
}