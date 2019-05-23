#pragma once
#include<stdio.h>
#include"dataStruct.h"

void printArray(struct s_Array array)
{
	if (array.size==100)
	{
		for (int row = 0; row < 10; row++)
		{
			for (int col = 0; col < 10; col++)
			{
				printf("%d  ", array.array[row][col]);
			}
			printf("\n");
		}
	}
	else
	{
		for (int row = 0; row < 11; row++)
		{
			for (int col = 0; col < 10; col++)
			{
				// ½Ø¶Ï´¦Àí
				if (row==10 && col == array.size%100)
				{
					printf("\n");
					break;
				}
				printf("%d  ", array.array[row][col]);
			}
			printf("\n");
		}
	}
}