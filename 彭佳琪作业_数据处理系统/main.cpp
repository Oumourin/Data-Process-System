#include"initData.h"
#include"selectSort.h"
#include"printArray.h"
#include"bubbleSort.h"

int main(int args, char* argv[])
{
	int array[11][10];
	initArray(array);
	printArray(array);
	// printArray(array);
	//selectSort(array);
	bubbleSort(array);
	printArray(array);
	return 0;
}