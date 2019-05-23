#pragma once

void twoToOne(int array[11][10], int dstArray[110])
{
	int subScript = 0;
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			dstArray[subScript] = array[row][col];
			subScript++;
		}
	}
}