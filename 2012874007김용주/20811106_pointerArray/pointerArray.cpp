#include <stdio.h>

// printArray
// 입력 : array
// 출력 : 없음
// 부수효과 : 화면에 배열 값을 출력

void printArray(int arr[], int length)
{
	for (int index = 0; index < length; index++)
		printf("array[%d] = %d\n", index, arr[index]);
}

int main()
{
	int a[3] = {10, 20, 30};	// array declaration: name a, length 3
	printArray(a, 3);

	int* ptr;
	// 배열의 이름만 사용하면 그 배열 첫 요소의 포인터값
	ptr = a;	// ptr = &a[0]
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	printf("\n", ptr[0]);

	// 포인터 변수이름을 배열 이름으로 사용할 수 있다.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[0] = %d\n", ptr[1]);
	printf("a[0] = %d\n", ptr[2]);

	

	return 0;
}