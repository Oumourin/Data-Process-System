#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"dataStruct.h"

void initRand() {
	srand((unsigned)time(NULL));
}

void initArray(struct s_Array array)
{
		initRand();
		for (int row = 0; row < 10; row++)
			for (int col = 0; col < 10; col++)
			{
				array.array[row][col] = rand()%100+1;
			}
		array.size = 100;
}

