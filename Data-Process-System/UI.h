#pragma once
#include"statement.h"
extern int arraySize;


//  自己改名字
void startUI()
{
	printf("====================================================================\n");
	printf("=====                       数据管理系统                       =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     按任意键进入系统                     =====\n");
	printf("====================================================================\n");
}

void menuUI()
{
	printf("====================================================================\n");
	printf("=====                      系  统  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、初始化数组                       =====\n");
	printf("=====                      1、选择法排序                       =====\n");
	printf("=====                      2、冒泡法排序                       =====\n");
	printf("=====                      3、插入法排序                       =====\n");
	printf("=====                      4、数据查找                         =====\n");
	printf("=====                      5、二进制转换                       =====\n");
	printf("=====                      6、素数和转换                       =====\n");
	printf("=====                      7、插入数据                         =====\n");
	printf("=====                      8、删除数据                         =====\n");
	printf("=====                      9、退出系统                         =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}

int findUI()
{
	int findNum;
	printf("请输入要查找的数：");
	scanf("%d", &findNum);
	return findNum;
}

int insertUI()
{
	int insertNum;
	printf("输入要插入的数：");
	scanf("%d", &insertNum);
	return insertNum;
}

int deleteUI()
{
	int deleteNum;
	printf("输入要删除的数：");
	scanf("%d", &deleteNum);
	return deleteNum;
}

void waitUI()
{
	printf("按任意键返回主菜单");
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
	printf("原数组为：\n");
	printArray(array);
}