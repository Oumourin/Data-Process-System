#pragma once
#include"TwoToOne.h"
#include"swapNum.h"
#include"oneToTwo.h"

// 采用二维数组转成一维数组的思路去做
void bubbleSort(int array[11][10])
{
	int newArray[110];
	twoToOne(array, newArray);
	for (int i = 0; i < 100-1; i++)
	{
		bool sortFlag = false;
		for (int j = 0; j < 100-i-1; j++)
		{
			if (newArray[j]>newArray[j+1])
			{
				swapNum(&newArray[j], &newArray[j + 1]);
				sortFlag = true;
			}
		}
		if (!sortFlag)
		{
			break;
		}
	}
	oneToTwo(newArray, array);
}