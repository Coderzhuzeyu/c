#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>




//数组  

//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//冒泡排序
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1 ; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz-1-i ;j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag = 1)
//		{
//			break;
//		}
//	}
//}
//
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	PrintArr(arr, sz);
//	BubbleSort(arr,sz);
//	PrintArr(arr, sz);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	//数组名是首元素地址
//	//有两个除外
//	//1.sizeof（arr）---sizeof(数组名)---数组名表示整个数组
//	//2.&arr---&数组名---数组名表示整个数组
//	//&数组名取出的是整个数组的地址
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	printf("%d\n", *arr);
//	return 0;
//}