//#include"UI.h"
//extern int arraySize;
//
//int main(int args, char* argv[])
//{
//	// �������򼴶�������г�ʼ��������δ�ڳ�ʼ������½������ݲ���
//	int array[11][10];
//	long long int binaryArray[11][10];
//	initArray(array);
//	int choiseNum=-1;
//	startUI();
//	while (true)
//	{
//		if (getchar())
//		{
//			system("cls");
//			break;
//		}
//	}
//	while (true)
//	{
//		menuUI();
//		scanf("%d", &choiseNum);
//		system("cls");
//		switch (choiseNum)
//		{
//		case 0:
//			initArray(array);
//			printf("��ʼ������Ϊ��\n");
//			printArray(array);
//			break;
//		case 1:
//			displaySrcArray(array);
//			selectSort(array);
//			printArray(array);
//			break;
//		case 2:
//			displaySrcArray(array);
//			bubbleSort(array);
//			printArray(array);
//			break;
//		case 3:
//			displaySrcArray(array);
//			insertSort(array);
//			printArray(array);
//			break;
//		case 4:
//			findData(array, findUI());
//			break;
//		case 5:
//			decimalToBinary(array, binaryArray);
//			printf("ԭ���飺\n");
//			printArray(array);
//			printf("���������飺\n");
//			printArray(binaryArray);
//			break;
//		case 6:
//			checkPrimeWithArray(array);
//			break;
//		case 7:
//			insertData(array, insertUI());
//			printArray(array);
//			break;
//		case 8:
//			deleteData(array, deleteUI());
//			printArray(array);
//			break;
//		case 9:
//			exit(0);
//		default:
//			printf("��������������룡");
//			break;
//		}
//		waitUI();
//	}
//}