#pragma once
#include"statement.h"
extern int arraySize;


//  �Լ�������
void startUI()
{
	printf("====================================================================\n");
	printf("=====                       ���ݹ���ϵͳ                       =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     �����������ϵͳ                     =====\n");
	printf("====================================================================\n");
}

void menuUI()
{
	printf("====================================================================\n");
	printf("=====                      ϵ  ͳ  ��  ��                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0����ʼ������                       =====\n");
	printf("=====                      1��ѡ������                       =====\n");
	printf("=====                      2��ð�ݷ�����                       =====\n");
	printf("=====                      3�����뷨����                       =====\n");
	printf("=====                      4�����ݲ���                         =====\n");
	printf("=====                      5��������ת��                       =====\n");
	printf("=====                      6��������ת��                       =====\n");
	printf("=====                      7����������                         =====\n");
	printf("=====                      8��ɾ������                         =====\n");
	printf("=====                      9���˳�ϵͳ                         =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}

int findUI()
{
	int findNum;
	printf("������Ҫ���ҵ�����");
	scanf("%d", &findNum);
	return findNum;
}

int insertUI()
{
	int insertNum;
	printf("����Ҫ���������");
	scanf("%d", &insertNum);
	return insertNum;
}

int deleteUI()
{
	int deleteNum;
	printf("����Ҫɾ��������");
	scanf("%d", &deleteNum);
	return deleteNum;
}

void waitUI()
{
	printf("��������������˵�");
	while (true)
	{
		getchar();
		if (getchar())
		{
			system("cls");
			break;
		}
	}
}

void displaySrcArray(int array[11][10])
{
	printf("ԭ����Ϊ��\n");
	printArray(array);
}