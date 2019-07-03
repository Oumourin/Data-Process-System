#pragma once
#include<math.h>
#include<stdio.h>

bool isPrime(int num)
{
	if (num < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i < num; i++)
		{
			if (0 == (num % i))
			{
				if (i == num)
				{
					return true;
				}
				return false;
			}
		}
	}
	return true;
}

void transferPrimeSum(int num)
{
	if (0 == num%2)
	{
		for (int i = 2; i < num ; i++)
		{
			int addend = num - i;
			if (isPrime(i) && isPrime(addend))
			{
				printf("数%d为素数%d和素数%d之和\n", num, i,addend);
				break;
			}
		}
	}
	else
	{
		printf("数%d不是偶数！\n", num);
	}
}

void checkPrimeWithArray(int array[11][10])
{
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			transferPrimeSum(array[row][col]);
		}
	}
}