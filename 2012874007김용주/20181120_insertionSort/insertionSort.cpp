#include <stdio.h>

void printArray(int* arr, int length)
{
	for (int index=0; index<length; index++)
		printf("array[%d] = %d\n", index, arr[index]);
}

void swapElement(int* arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertElement(int* arr, int element)
{
	for(int k=element; k>0; k--)
	{
		if (arr[k]<arr[k-1])
			swapElement(arr, k-1, k);
		else
			break;
	}
}

void insertionSort(int* arr, int length)
{
	for(int i=1; i<length; i++)
		insertElement(arr, i);
}

int main()
{
	int a[5] = {30, 35, 27, 15, 40};
	printArray(a, 5);
	printf("\n");

	insertionSort(a, 5);
	printArray(a, 5);
}