#pragma once
#include"selectSort.h"
extern int arraySize;

void insertData(int array[11][10], int num)
{
	// �Ƚ�������
	selectSort(array);
	if (arraySize <= 110)
	{
		array[0][0] = num;
		arraySize++;
	}
	else
	{
		printf("���������޷����룡\n");
	}
	// ��������
	selectSort(array);
}