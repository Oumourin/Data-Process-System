#pragma once
#include"swapNum.h"
#include"oneToTwo.h"
#include"TwoToOne.h"

void insertSort(int array[11][10])
{
	int newArray[110];
	twoToOne(array, newArray);
	for (int i = 1; i < 110; i++)
	{
		int j = i;
		while (j > 0 && newArray[j] < newArray[j-1])
		{
			swapNum(&newArray[j], &newArray[j - 1]);
			j--;
		}
	}
	oneToTwo(newArray, array);
}
