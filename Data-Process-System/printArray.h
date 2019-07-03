#pragma once
#include<stdio.h>

void printArray(int array[11][10])
{
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			printf("%d  ", array[row][col]);
		}
		printf("\n");
	}
}

// 重载输出方法
void printArray(long long int array[11][10])
{
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			printf("%lld  ", array[row][col]);
		}
		printf("\n");
	}
}