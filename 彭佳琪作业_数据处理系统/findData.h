#pragma once
#include<stdio.h>

bool findData(int array[11][10], int findNum)
{
	bool findFlag = false;
	int numCount = 0;
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			if (array[row][col] == findNum)
			{
				numCount++;
				printf("���ҵ�%d����  ������:%d ������:%d\n", numCount, row + 1, col + 1);
				findFlag = true;
			}
		}
	}
	if (!findFlag)
	{
		printf("δ�ҵ���%d!", findNum);
	}
	return findFlag;
}

void findDataWithCoordinate(int array[11][10], int num, int * x, int * y)
{
	//  -1����δ�ҵ�
	*x = -1;
	*y = -1;
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col)
		{
			if (array[row][col] == num)
			{
				*x = row;
				*y = col;
				return;
			}
		}
	}
}