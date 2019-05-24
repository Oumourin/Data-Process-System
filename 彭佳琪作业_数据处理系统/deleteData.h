#pragma once
#include"findData.h"
#include"bubbleSort.h"
extern int arraySize;

void deleteData(int array[11][10], int num)
{
	int xPoint, yPoint;
	findDataWithCoordinate(array, num, &xPoint, &yPoint);
	if (xPoint == -1 || xPoint == -1)
	{
		printf("Êý×Ö%d²»´æÔÚ£¡\n", num);
	}
	else
	{
		array[xPoint][yPoint] = 0;
		arraySize--;
		bubbleSort(array);
	}
}