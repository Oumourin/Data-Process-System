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
				printf("已找到%d个数  所在行:%d 所在列:%d\n", numCount, row + 1, col + 1);
				findFlag = true;
			}
		}
	}
	if (!findFlag)
	{
		printf("未找到数%d!", findNum);
	}
	return findFlag;
}