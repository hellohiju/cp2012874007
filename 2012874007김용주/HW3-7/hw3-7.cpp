// hw3-7
// 두 정수 배열의 합을 반환하는 함수

#include <stdio.h>

// 이름: addArray
// 입력: 배열, 배열길이
// 출력: 배열 각 요소들의 합
// 부수효과: 없음

int addArray(int a[], int length)
{
	int sum = 0;
	for (int count=0; count<length; count++)
		sum += a[count];

	return sum;
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int len = 5;
	
	printf("addArray = %d\n",addArray(arr, 5));

}