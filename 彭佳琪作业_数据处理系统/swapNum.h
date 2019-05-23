#pragma once

void swapNum(int *arrayA, int *arrayB)
{
	int temp = *arrayA;
	*arrayA = *arrayB;
	*arrayB = temp;
}