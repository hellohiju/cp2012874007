// hw2-9.cpp
// 1���� 9������ ���� �ϳ��� �Է� �޾� �� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// (5�̸� 5���� ���)
// ���� �������� 1���� 9���� �̿��� ���ڸ� ����ڰ� �߸� �Է��� ���� ������, 
// �� ��쿡 �߸��� ���ڶ�� ���� �˷��ִ� ���� �޽����� ����ϰ� �ٽ� ���ڸ� �Է� �޵��� ó���Ͻÿ�.
// (�Է��� ��ȿ�� �˻�)

#include <stdio.h>
int main()
{
	printf("times table\n");
	
	while (1)
	{
		int a;

		printf("Enter between 1 and 9\n");
		printf("times table of: ");
		scanf("%d", &a);

		if (a>=1 && a<=9)
		{
			for (int i=0; i<10; i++)
			{
				printf("%d * %d = %d\n", a, i, a*i);
			}
		}

		else
		{
			printf("Your input was wrong!\n");
			continue;
		}

		printf("\n");
	}

	return 0;
}
