// hw1-2.cpp
// �ϳ��� ������ �Է� �޾� �� ���� ¦��(even number)���� Ȧ��(odd number)������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int a;

	printf("Whether integer is odd or even\n");

	printf("Enter an integer: ");
	scanf("%d", &a);

	if (a%2 == 0)
		printf("%d is even\n\n", a);
	else
		printf("%d is odd\n\n", a);

	return 0;
}
