#pragma once
#include"swapNum.h"

void selectSort(int array[11][10])
{
	for (int row = 0; row < 10; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			// ��ȡ��ǰ������ֵ
			int tempNum = array[row][col];
			int tempRow = row;
			int tempCol = col;
			// ��ʣ��ֵ���б�����ɸѡ����Сֵ
			for (int i = row; i < 10; i++)
			{
				// ��ʼ����ѭ����־
				int j;
				// ����һ������ʼ
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
					// ������Сֵ���и�������
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