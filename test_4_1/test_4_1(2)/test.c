#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			sum++;
//		}
//		if (i / 10 == 9)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return;
//}



////����1/1-1/2+1/3-1/4+1/5����+1/99-1/100 ��ֵ
//
//int main()
//{
//	float a = 0;
//	float i = 0;
//	float j = 0;
//	float sum = 0;
//	for (a = 1; a <= 99; a+=2)
//	{
//		i += 1 / a;
//	}
//	for (a = 2; a <= 100; a += 2)
//	{
//		j += -(1 / a);
//	}
//	sum = i + j;
//	printf("%f\n", sum);
//	return 0;
//}


////����Ǹ���

//int main()
//{
//	int i = 0;
//	int arr[10];
//	printf("������ʮ������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////��10 �����������ֵ
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[10];
//	printf("������ʮ���� \n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	n = arr[0]>arr[1]? arr[0] : arr[1];
//	for (i = 2; i < 10; i++)
//	{
//		n = n>arr[i] ? n : arr[i];
//	}
//	printf("max= %d\n ", n);
//	return 0;
//}


//���9*9�˷�

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			n = i*j;
//			printf("%d*%d=%d ",i,j,n);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���9*9�˷��ھ���

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	for (i = 1; i < 10; i++)
		{
			for (j = 1; j < 10; j++)
			{
				n = i*j;
				printf("%d*%d=%d ", i, j, n);
				if (i == j)
				{
					printf("\n");
					break;
				}
			}
		}	
	return 0;
}