// hw2-7.cpp
// 0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ������ ����Ͻÿ�.

#include <stdio.h>
int main()
{
	printf("sum\n");

	int a;
	int sum = 0;
	
	while (1)
	{
		printf("Enter an integer: ");
		scanf("%d", &a);

		if (a != 0)
		{
			sum += a;
			continue;
		}
			
		else
		{
			printf ("SUM = %d\n", sum);
			break;
		}
	}

	return 0;
}
