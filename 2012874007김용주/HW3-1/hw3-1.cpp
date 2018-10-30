// hw3-1
// 두 정수 사이에 모든 정수들(두 정수 포함)를 순서대로 화면에 출력하는 함수

#include <stdio.h>

// 함수: printNumber
// 입력: 두 정수
// 출력: 없음
// 부수효과: print

void printNumber(int a, int b)
{
	int count;
	if (a<b)
	{
		for (count = a; count <= b; count++)
			printf("%d\n",count);
	}

	else
	{
		for (count = b; count <= a; count++)
			printf("%d\n",count);
	}
}

int main()
{
	printNumber(3, 10);
	printf("\n");
	printNumber(13, 5);
	printf("\n");
	printNumber(10, 10);

	return 0;
}