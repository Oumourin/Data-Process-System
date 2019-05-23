#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void initRand() {
	srand((unsigned)time(NULL));
}

void initArray(int  array[11][10])
{
		initRand();
		for (int row = 0; row < 10; row++)
			for (int col = 0; col < 10; col++)
			{
				array[row][col] = rand()%100+1;
			}
}

