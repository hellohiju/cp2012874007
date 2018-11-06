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

	//swap: ���� a, b�� ���� �ٲ۴�.
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);

	//swap: ���� a, b�� ���� �ٲٴ� �Լ�
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}