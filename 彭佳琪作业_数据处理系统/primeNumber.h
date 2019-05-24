#pragma once
#include<math.h>
#include<stdio.h>

bool isPrime(int num)
{
	bool primeFlag = true;
	if (num < 2)
	{
		primeFlag = false;
	}
	else
	{
		for (int i = 2; i < int(sqrt(num)); i++)
		{
			if (0 == num / i)
			{
				primeFlag = false;
				break;
			}
		}
	}
	return primeFlag;
}

void transferPrimeSum(int num)
{
	if (isPrime(num))
	{
		for (int i = 2; i < int(sqrt(num)); i++)
		{
			int addend = num - i;
			if (isPrime(num)&&isPrime(addend))
			{
				printf("��%dΪ����%d������%d֮��\n", num, i,addend);
			}
		}
	}
	else
	{
		printf("��%d����������\n", num);
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