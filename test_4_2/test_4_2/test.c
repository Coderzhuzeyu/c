#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//���ֲ����㷨

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

#include<string.h>
#include<windows.h>

//int main()
//{
//	char arr1[] = "!!!!!!!!!!!!!!!!!!!!"; 
//	char arr2[] = "####################";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);//˯�ߺ���-��λ�Ǻ���
//		system("cls");//ִ��ϵͳ����-cls-�����Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{ 
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", &password);
//		//�����ַ����Ƚϴ�С����ֱ����==����Ӧ��strcmp(),string compare
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��½�ɹ�\n");
//			
//			//char arr1[] = "!!!!!!!!!!!!!!!!!!!!"; 
//			//char arr2[] = "####################";
//			//int len = strlen(arr1);
//			//int left = 0;
//			//int right = len - 1;
//			//while (left<=right)
//			//{
//			//	arr2[left] = arr1[left];
//			//	arr2[right] = arr1[right];
//			//	printf("%s", arr2);
//			//	Sleep(500);//˯�ߺ���-��λ�Ǻ���
//			//	system("cls");//ִ��ϵͳ����-cls-�����Ļ��Ϣ
//			//	left++;
//			//	right--;
//			//}
//			//printf("%s\n", arr1);
//			break;
//
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}


#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("***  1.play    0.exit  ***\n");
//	printf("**************************\n");
//
//}
//
//void game()
//{
//	int guess = 0;
//	//rand��������0-32767֮����������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("���1-100���֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//strandֻҪ����һ�Σ�����Ƶ������
//	//time��������һ��ʱ���
//	/*ʱ���ָ���ǣ�������ڵ���time����
//	�����ʱ����������ʼʱ���һ����ֵ��λ����*/
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//		
//	} while (input);
//	return 0;
//}


////��������Ϸ  ����123456
//
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("***  1.play    0.exit  ***\n");
//	printf("**************************\n");
//
//}
//void game()
//{
//	int guess = 0;
//	//rand��������0-32767֮����������
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("���1-100���֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//strandֻҪ����һ�Σ�����Ƶ������
//	//time��������һ��ʱ���
//	/*ʱ���ָ���ǣ�������ڵ���time����
//	�����ʱ����������ʼʱ���һ����ֵ��λ����*/
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", &password);
//		//�����ַ����Ƚϴ�С����ֱ����==����Ӧ��strcmp(),string compare
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��½�ɹ�\n");
//			do
//			{
//				menu();
//				printf("��ѡ��>");
//				scanf("%d", &input);
//				switch (input)
//				{
//				case 1:
//					game();
//					break;
//				case 0:
//					printf("�˳���Ϸ\n");
//					break;
//				default:
//					printf("ѡ�����\n");
//					break;
//				}
//
//			} while (input);
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		char arr1[] = "ni shi sha zi ? zhe dou neng shu cuo";
//		char arr2[] = "####################################";
//		int len = strlen(arr1);
//		int left = 0;
//		int right = len - 1;
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			printf("%s", arr2);
//			Sleep(500);//˯�ߺ���-��λ�Ǻ���
//			system("cls");//ִ��ϵͳ����-cls-�����Ļ��Ϣ
//			left++;
//			right--;
//		}
//		printf("%s\n", arr1);
//	}
//	return 0;
//}


////�ػ�����-shutdown -s -t 60����ʮ���ػ���
//int main()
//{
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//		printf("�����룺>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");//ȡ���ػ�
//			break;
//		}
//	}
//	return 0;
//}


////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main()
//{
//	int n = 1;
//	int i = 0;
//	double sum = 0.0;
//	/*   /(����)�����߲���������������ִ�е�������������ֻҪ��һ���Ǹ����ͣ�
//	ִ�еľ��Ǹ����ͳ���*/
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i)*n;
//		n = -n;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}


//9*9�˷��ھ���
int main()
{
	int i = 0;
	int n = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			n = i*j;
			printf("%d*%d=%-2d ", i, j, n);
		}
		printf("\n");
	}
	return 0;
}