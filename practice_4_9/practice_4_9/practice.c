#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//数组存储练习


//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	int t = 0;
//	while (i < j)
//	{
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//		i++;
//		j--;
//	}
//}
//
//void init(int arr[],int sz,int i)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		arr[j] = i;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{ 
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	int i = 0;
//	printf("请输入要初始化的数：>");
//	scanf("%d", &i);
//	init(arr, sz, i);
//	print(arr, sz);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void SwapArray(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	int t = 0;
//	for (i = 0; i <= j; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	print(arr2, sz);
//	SwapArray(arr1, arr2, sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}