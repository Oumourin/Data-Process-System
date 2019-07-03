#pragma once

void oneToTwo(int srcArray[110], int dstArray[11][10])
{
	int subScript = 0;
	for (int row = 0; row < 11; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			dstArray[row][col] = srcArray[subScript];
			subScript++;
		}
	}
}