/*
SELECTION SORT

30 35 27 15 40

1) 제일 작은 값을 찾는다.----------------------- int findMin(int arr[]){return minIndex;}

2) 1)의 제일 작은 값과 최소값의 위치 swap--------- void swap(int arr[], index1, index2){}

15 35 27 30 40

3) 두번째 이상에서 1)2)의 과정을 반복한다.
15 27 35 30 40
15 27 30 35 40

4) 네번째 이상까지 하고 종료
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

// 함수: findMin
// 입력: 배열(배열이름, 배열길이)
// 출력: 최소값
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

// 함수: findMinIndex
// 입력: 배열(배열이름, 배열길이)
// 출력: 최소값의 인덱스
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
// 입력: 배열(배열이름, 배열길이), 두 개의 index
// 출력: 없음
// 부수효과: 배열 내 두 개의 인덱스 요소가 바뀜
void swapElement(int* arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// selectionSort
// 입력: 배열(배열이름, 배열길이), 두 개의 index
// 출력: 없음
// 부수효과: 배열이 정렬됨

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