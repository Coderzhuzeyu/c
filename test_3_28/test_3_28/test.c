#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("num = %d\n", num);
//	return 0;
//}


//int main()
//{
//	int arr1[10] = {0};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("%d\n", sz);
//	//printf("%d\n", arr1[0]);
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



////比较两个数的大小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//	    if (a < b)
//		    printf("%d\n", b);
//	    else
//		    printf("相等\n");
//	return 0;
//}



int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		if (x < y)
			return y;
		else
			printf("相等\n");
	return x;
}


int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("max = %d\n", max);
	return 0;
}