#include <stdio.h>

void swap(int* ptra, int* ptrb)
{
	int temp;

	temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
}

int main()
{
	int a = 10, b = 20;

	//swap: 변수 a, b의 값을 바꾼다.
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);

	//swap: 변수 a, b의 값을 바꾸는 함수
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}