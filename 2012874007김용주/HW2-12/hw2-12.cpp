// hw2-12.cpp
// for��(while)�� ���� �ݺ��� break ���� �̿��Ͽ� 
// 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	printf("Largest\n");

	int a = 0;
	int b = 0;

	printf("Enter integers\n");

	while (1)
	{
		printf("integer: ");
		scanf("%d", &a);

		if (a > b)
			b = a;

		if (a == 0)
		{
			printf("The largest number is %d\n", b);
			break;
		}
	}
	return 0;
}