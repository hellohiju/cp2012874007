// hw1-3.cpp
// �� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int a, b, c;

	printf("Find the largest integer between three integers\n");

	printf("Enter an integer1: ");
	scanf("%d", &a);
	printf("Enter an integer2: ");
	scanf("%d", &b);
	printf("Enter an integer3: ");
	scanf("%d", &c);

	if (a >= b && a >= c)
		printf("%d is the largest ingeter\n\n", a);
	else if (b >= a && b >= c)
		printf("%d is the largest ingeter\n\n", b);
	else //if (c >= a && c >= a)
		printf("%d is the largest ingeter\n\n", c);

	return 0;
}
