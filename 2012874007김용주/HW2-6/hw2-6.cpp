// hw2-6.cpp
// � ���� ����(n)�� �Է� �޾�
// (���� 0�̳� ���� ������ �Է��ϸ�, ���� �޽����� ��� ��, �ٽ� �Է��ϵ��� ó��), 
// �� ���� 2n�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	printf("double\n");

	int n;
	
	while (1)
	{
		printf("Enter an positive integer: ");
		scanf("%d", &n);

		if (n > 0)
			printf("2n = %d\n", 2*n);
		else
			printf("Your input is NOT an positive integer\n");
			continue;
	}

	return 0;
}
