// hw2-18.cpp
// 1���� 100���� 5�� ����� ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int sum = 0;
	int i;

	for(i=1; i<=100; i++)
	{
		if (i%5 == 0)
		{
			sum += i;
		}
	}

	printf("sum = %d\n", sum);

	return 0;
}