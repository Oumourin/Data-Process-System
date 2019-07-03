#pragma once
#include"selectSort.h"
extern int arraySize;

void insertData(int array[11][10], int num)
{
	// 先进行排序
	selectSort(array);
	if (arraySize <= 110)
	{
		array[0][0] = num;
		arraySize++;
	}
	else
	{
		printf("数组已满无法插入！\n");
	}
	// 二次排序
	selectSort(array);
}