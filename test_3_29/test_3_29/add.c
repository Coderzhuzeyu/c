#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

static int g_val = 2020;//static �ı���ȫ�ֱ�����������-��С�ˣ�ֻ�����Լ����ڵ�.c�ļ���ʹ��

//static���κ���
//�ı��˺�����������
//ֻ�����Լ����ڵ�.c�ļ�ʹ��
static int Add(int x,int y)
{
	int z = x + y;
	return z;
}

