#include"initData.h"
#include"selectSort.h"
#include"printArray.h"
#include"bubbleSort.h"
#include"insertSort.h"
#include"findData.h"

int main(int args, char* argv[])
{
	int array[11][10];
	initArray(array);
	printArray(array);
	printf("\n");
	findData(array, 101);
	// printArray(array);
	// selectSort(array);
	//bubbleSort(array);
	//insertSort(array);
	//printArray(array);
	return 0;
}