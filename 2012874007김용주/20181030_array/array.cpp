#include <stdio.h>

// 함수: printArray
// 입력: 배열
// 출력: 없음
// 부수효과: 화면에 모든 요소를 출력

void printArray(int arr[], int length)	// (배열이름[], 배열길이)
{
	for (int count=0; count<length; count++)
	{
		printf("printArray arr[%d] = %d\n", count, arr[count]);
	}
}

int main()
{
	int length = 4;
	// int a[4];
	// array declaration
	// 1. 배열의 이름: a
	// 2. 요소element의 자료형: int
	// 3. 배열의 길이: 4

	// a[0] = 20;		// index starts form 0
	// a[1] = 200;
	// a[2] = 2000;
	// a[3] = 20000;	// index ends at n-1

	int a[4] = {20, 200, 2000, 20000};		// initialize the array
	int arr[] = {3, 30, 300};				// 길이 3의 배열 생성

	int count = 0;
	while (count < length)
	{
		printf("while loop a[%d] = %d\n", count, a[count]);
		count++;
	}

	for (count=0; count<length; count++)
	{
		printf("for loop a[%d] = %d\n", count, a[count]);
	}

	// 배열을 매개변수로 함수에 던지는 방법
	// 배열을 매개변수로 하기 위해서는 
	// 배열의 이름과 배열의 길이를 함께 함수로 넘겨야 한다.
	// 배열의 이름만으로 함수에서 배열의 길이를 알 방법이 없기 때문

	printArray(a, length);	// 배열을 매개변수로(배열의 이름 a, 배열의 길이 length)

	return 0;
}