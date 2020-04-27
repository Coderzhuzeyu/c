#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////递归方式实现打印一个整数的每一位
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

////非递归求n的阶乘
//
//int main()
//{
//	int t = 1;
//	int m = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (m = 1; m <= n; m++)
//	{
//		t *= m;
//	}
//	printf("%d\n",t);
//	return 0;
//}
//
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


////非递归实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//
////递归实现strlen
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
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


////非递归求第n个斐波那契数
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
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
////递归求第n个斐波那契数
//int Fib(int i)
//{
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
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}






//void reverse_string(char* ch1)
//{
//	if (*ch1 != '\0')
//	{
//		reverse_string(ch1 + 1);
//	}
//	printf("%c",*ch1 );
//}
//
//int main()
//{
//	char ch[] = "bitro";
//	reverse_string(ch);
//	return 0;
//}


//字符串逆序（递归实现）
//#include<string.h>
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}
//int main()
//{
//	char ch[] = "abcdefg";
//	reverse_string(ch);
//	printf("%s\n", ch);
//	return 0;
//}

////计算一个数的每位之和（递归实现）
//int DigitSum(unsigned int n)
//{
//	int a = 0;
//	int t = 0;
//	if (n > 9)
//	{
//		a = n / 10;
//		t = DigitSum(a);
//	}
//	return t += n % 10;
//}
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	int sum = DigitSum(i);
//	printf("%d\n", sum);
//	return 0;
//}



//递归实现n的k次方
Power(int a, int b)
{
	if (b > 1)
	{
		return a*Power(a, b - 1);
	}
	else if (b = 1)
	{
		return a;
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int t = Power(n, k);
	printf("%d\n", t);
	return 0;
}