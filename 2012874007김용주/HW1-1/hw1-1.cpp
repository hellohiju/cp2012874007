// hw1-1.cpp
// �� ��(����)�� �Է� �޾�, �� �� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int a, b;

	printf("Find the larger integer between two integers\n");

	printf("Enter an integer1: ");
	scanf("%d", &a);
	printf("Enter an integer2: ");
	scanf("%d", &b);

	if (a > b)
		printf("%d is larger\n\n", a);
	else if (a < b)
		printf("%d is larger\n\n", b);
	else
		printf("These integers are equal\n\n");

	return main();
}
