// hw2-8.cpp
// 1���� 9������ ���� �ϳ��� �Է� �޾� �� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// (5�̸� 5���� ���)

#include <stdio.h>
int main()
{
	printf("times table\n");

	int a;

	printf("Enter between 1 and 9\n");
	printf("times table of: ");
	scanf("%d", &a);

	for (int i=0; i<10; i++)
	{
		printf("%d * %d = %d\n", a, i, a*i);
	}

	return 0;
}
