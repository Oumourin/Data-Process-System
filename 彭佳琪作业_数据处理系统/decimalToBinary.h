#pragma once

// 这个算法求过大的数的二进制数可能会溢出，所以需要在初始化那里限制一下
// 这里图方便用long long int的数组来存储结果，C99以前的编译器可以考虑换成double
// double需要考虑输出格式的问题了

void decimalToBinary(int array[11][10], long long int binaryArray[11][10])
{
	int digit = 1;
	int result = 0;
	int remainder;
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			int getDecNum = array[row][col];
			int digit = 1;
			int result = 0;
			int remainder;
			while (true)
			{
				remainder = getDecNum % 2;
				getDecNum /= 2;
				result += remainder * digit;
				digit *= 10;
				if (getDecNum < 2 )
				{
					result += getDecNum * digit;
					binaryArray[row][col] = result;
					break;
				}
			}
		}
	}
}