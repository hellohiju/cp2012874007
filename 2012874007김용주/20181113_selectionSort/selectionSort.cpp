/*
SELECTION SORT

30 35 27 15 40

1) ���� ���� ���� ã�´�.----------------------- int findMin(int arr[]){return minIndex;}

2) 1)�� ���� ���� ���� �ּҰ��� ��ġ swap--------- void swap(int arr[], index1, index2){}

15 35 27 30 40

3) �ι�° �̻󿡼� 1)2)�� ������ �ݺ��Ѵ�.
15 27 35 30 40
15 27 30 35 40

4) �׹�° �̻���� �ϰ� ����
-------------------------------------
30 35 27 15 40
15 35 27 30 40
15 27 35 30 40
15 27 30 35 40
*/

#include <stdio.h>

void printArray(int* arr, int length)
{
	for (int index=0; index<length; index++)
		printf("array[%d] = %d\n", index, arr[index]);
}

// �Լ�: findMin
// �Է�: �迭(�迭�̸�, �迭����)
// ���: �ּҰ�
int findMin(int* arr, int length)
{
	int i;
	int min = arr[0];
	for(i=1; i<length; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

// �Լ�: findMinIndex
// �Է�: �迭(�迭�̸�, �迭����)
// ���: �ּҰ��� �ε���
int findMinIndex(int* arr, int length, int now)
{
	int minIndex = now;
	for(int i=now; i<length; i++)
	{
		if (arr[i] < arr[minIndex])
			minIndex = i;
	}

	return minIndex;
}

// swapElement
// �Է�: �迭(�迭�̸�, �迭����), �� ���� index
// ���: ����
// �μ�ȿ��: �迭 �� �� ���� �ε��� ��Ұ� �ٲ�
void swapElement(int* arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// selectionSort
// �Է�: �迭(�迭�̸�, �迭����), �� ���� index
// ���: ����
// �μ�ȿ��: �迭�� ���ĵ�

void selectionSort(int* arr, int length)
{
	int i;
	for(i=0; i<(length-1); i++)
	{
		//int a[length-i];
		//for(int k=0; k<length; k++)
		//a[k]=arr[i];
		swapElement(arr, i, findMinIndex(arr, length, i));
	}
}
int main()
{
	int a[5] = {30, 35, 27, 15, 40};
	printArray(a, 5);

	selectionSort(a, 5);
	printArray(a, 5);
}