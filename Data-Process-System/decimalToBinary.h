#pragma once

// ����㷨���������Ķ����������ܻ������������Ҫ�ڳ�ʼ����������һ��
// ����ͼ������long long int���������洢�����C99��ǰ�ı��������Կ��ǻ���double
// double��Ҫ���������ʽ��������

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