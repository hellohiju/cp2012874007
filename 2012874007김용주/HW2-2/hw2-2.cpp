// hw2-2.cpp
// 10���� ������ �Է� �޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int a;
	int i = 0;
	int sum = 0;

	while (i < 10)
	{
		printf("integer%d = ", ++i);
		scanf("%d", &a);
		sum += a;
	}
	
	printf("SUM = %d\n", sum);

	return 0;
}
