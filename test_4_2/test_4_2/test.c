#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//二分查找算法

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要查找的数字：");
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
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
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
//		Sleep(500);//睡眠函数-单位是毫秒
//		system("cls");//执行系统命令-cls-清空屏幕信息
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
//		printf("请输入密码：>");
//		scanf("%s", &password);
//		//两个字符串比较大小不能直接用==，而应用strcmp(),string compare
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登陆成功\n");
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
//			//	Sleep(500);//睡眠函数-单位是毫秒
//			//	system("cls");//执行系统命令-cls-清空屏幕信息
//			//	left++;
//			//	right--;
//			//}
//			//printf("%s\n", arr1);
//			break;
//
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误退出程序\n");
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
//	//rand函数返回0-32767之间的随机整数
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜1-100数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//strand只要调用一次，不能频繁调用
//	//time函数返回一个时间戳
//	/*时间戳指的是：计算机在调用time函数
//	的这个时间与计算机起始时间的一个差值单位是秒*/
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//		}
//		
//	} while (input);
//	return 0;
//}


////猜数字游戏  密码123456
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
//	//rand函数返回0-32767之间的随机整数
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜1-100数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//strand只要调用一次，不能频繁调用
//	//time函数返回一个时间戳
//	/*时间戳指的是：计算机在调用time函数
//	的这个时间与计算机起始时间的一个差值单位是秒*/
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", &password);
//		//两个字符串比较大小不能直接用==，而应用strcmp(),string compare
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登陆成功\n");
//			do
//			{
//				menu();
//				printf("请选择：>");
//				scanf("%d", &input);
//				switch (input)
//				{
//				case 1:
//					game();
//					break;
//				case 0:
//					printf("退出游戏\n");
//					break;
//				default:
//					printf("选择错误\n");
//					break;
//				}
//
//			} while (input);
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
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
//			Sleep(500);//睡眠函数-单位是毫秒
//			system("cls");//执行系统命令-cls-清空屏幕信息
//			left++;
//			right--;
//		}
//		printf("%s\n", arr1);
//	}
//	return 0;
//}


////关机程序-shutdown -s -t 60（六十秒后关机）
//int main()
//{
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("你的电脑将于1分钟内关机，如果输入：我是猪，就取消关机\n");
//		printf("请输入：>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");//取消关机
//			break;
//		}
//	}
//	return 0;
//}


////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//int main()
//{
//	int n = 1;
//	int i = 0;
//	double sum = 0.0;
//	/*   /(除号)，两边操作数都是整数，执行的是整数除法，只要有一个是浮点型，
//	执行的就是浮点型除法*/
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i)*n;
//		n = -n;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}


//9*9乘法口诀表
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