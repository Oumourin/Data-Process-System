#include"statement.h"
extern int arraySize;

int main(int args, char* argv[])
{
	int array[11][10];
	long long int binaryArray[11][10];
	initArray(array);
	printArray(array);
	printf("\n");
	//checkPrimeWithArray(array);
	// decimalToBinary(array, binaryArray);
	// printArray(binaryArray);
	// findData(array, 101);
	// printArray(array);
	// selectSort(array);
	//bubbleSort(array);
	//insertSort(array);
	//printArray(array);
	insertData(array, -1);
	printArray(array);
	printf("%d\n", arraySize);
	deleteData(array, -1);
	printArray(array);
	printf("%d\n", arraySize);
	return 0;
}