#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int num = 10;
//	num = 20;
//	printf("num = %d\n", num);
//	return 0;
//}

//#define MAX 1000
//
//enum SEX   //enum枚举关键字
//{
//	MALE,
//	FEMALE,
//	SECRET
//};

//2.  const 修饰的常变量
//int main()
//{
//	//const int num = 10;
//	//num = 20;
//	//printf("num = %d\n", num);
//	//const int n = 10;
//	//int arr[n] = { 0 };//错误
//	//3.   #define  定义的标识符常量
//	//int a = MAX;
//	//printf("a = %d\n", a);
//	//4.   枚举常量
//
//	int num = 10;
//	enum SEX s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

#include<string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' ,0};//字符串到字符\0结束，或0（\0的ASCII编码是0）结束
//	printf("%d\n", strlen(arr1)); //strlen计算字符串长度，\0不算字符串长度
//	printf("%d\n", strlen(arr2));
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	//转义字符
//	//\t  水平制表符
//	//printf("c:\test\32\test.c");
//	//printf("hehen");
//
//	//printf("%c", '\'');
//	//printf("%s\n", "\"");
//
//	//printf("c:\\test\\32\\test.c");
//
//	//printf("\a\a\a\a\a\a");  //\a警告字符
//	//printf("hello\nworld\n");
//	//printf("%d\n",strlen("c:\test\32\test.c"));//13
//	//printf("%c\n", '\32');//把8进制的32转换为10进制数后，作为ASCII码值代表的那个字符
//	//  \ddd  ddd表示1到3个八进制数字
//	//printf("%c\n", '\x41');//  \xdd  dd表示2个十六进制数
//	return 0;
//
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗(1/0)?\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20000)
//	{
//		printf("敲代码:%d\n",line);
//		line++;
//	}
//	printf("好offer\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%d\n", arr[0]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//按位与
//	//printf("%d\n", c);
//	//int c = a | b;//按位或
//	//printf("%d\n", c);
//	int c = a^b;//按位异或
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	//a = 10;
//
//	a = a + 1;
//	a += 1;
//
//	a = a * 1;
//	a *= 1;
//
//	a = a & 1;
//	a &= 1;
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = a + b;//双目操作符
//
//	//int a = 10;
//	//printf("%d\n", !a);
//	//int a = -10;
//	//a = -a;
//	//a = +a;
//
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sz);
//	printf("%d\n", arr[0]);
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 26);
//	return 0;
//}
