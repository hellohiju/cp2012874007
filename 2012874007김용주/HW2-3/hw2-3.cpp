// hw2-3.cpp
// 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ���
// (while�� ���)

#include <stdio.h>
int main()
{
	printf("sum multiples of 3 less than 100\n");

	int i = 0;
	int sum = 0;

	while (++i <= 10)
	{
		if (i % 3 == 0)
			sum += i;
	}
	
	printf ("SUM = %d\n", sum);

	return 0;
}
