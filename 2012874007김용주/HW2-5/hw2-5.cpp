// hw2-5.cpp
// 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ���
// (do-while�� ���)

#include <stdio.h>
int main()
{
	printf("sum multiples of 3 less than 100\n");

	int i = 0;
	int sum = 0;

	do
	{
		if (i % 3 == 0)
			sum += i;
	}
	while (i++ < 100);
	
	printf ("SUM = %d\n", sum);

	return 0;
}
