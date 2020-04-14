#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

static int g_val = 2020;//static 改变了全局变量的作用域-变小了，只能在自己所在的.c文件中使用

//static修饰函数
//改变了函数的作用域
//只能在自己所在的.c文件使用
static int Add(int x,int y)
{
	int z = x + y;
	return z;
}

