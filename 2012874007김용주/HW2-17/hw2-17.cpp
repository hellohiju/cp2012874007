// hw2-17.cpp
// 1���� 100������ ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int sum = 0;
	int i;

	for(i=1; i<=100; i++)
	{
		sum += i;
	}

	printf("sum = %d\n", sum);

	return 0;
}