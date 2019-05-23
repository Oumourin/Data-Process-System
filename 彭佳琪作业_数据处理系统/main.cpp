#include"dataStruct.h"
#include"initData.h"
#include"selectSort.h"
#include"printArray.h"
#include"bubbleSort.h"
#include"insertSort.h"

int main(int args, char* argv[])
{
	struct s_Array array;
	//int array[11][10];
	initArray(array);
	printArray(array);
	// printArray(array);
	selectSort(array.array);
	//bubbleSort(array);
	//insertSort(array);
	printArray(array);
	return 0;
}