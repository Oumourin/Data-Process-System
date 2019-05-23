#pragma once
#include"swapNum.h"

void selectSort(int array[11][10])
{
	for (int row = 0; row < 10; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			// 获取当前待排序值
			int tempNum = array[row][col];
			int tempRow = row;
			int tempCol = col;
			// 对剩余值进行遍历并筛选出最小值
			for (int i = row; i < 10; i++)
			{
				// 初始化内循环标志
				int j;
				// 从下一个数开始
				if (i == row)
				{
					j = col + 1;
				}
				else
				{
					j = 0;
				}
				for (j ; j < 10; j++)
				{
					// 发现最小值进行更新数据
					if (array[i][j] < tempNum)
					{
						tempNum = array[i][j];
						tempRow = i;
						tempCol = j;
					}
				}
			}
			if (row != tempRow || col != tempCol)
			{
				swapNum(&array[row][col], &array[tempRow][tempCol]);
			}
		}
	}
}