// hw2-14.cpp
// ����ڷκ��� ���� �ϳ��� �Է¹޾�,
// 7���� �Է¹��� �������� ��� �������� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է¹��� ���ڰ� 7���� ������ ���� �޽����� ����Ѵ�.

#include <stdio.h>
int main()
{
	printf("77777\n");

	int a;

	while(1)
	{
		int a;

		printf("Enter an integer greater than 7\n");
		printf("Input: ");
		scanf("%d", &a);

		if (a>=7)
		{
			int sum = 0;

			printf("sum of 7 to %d is ", a);

			while (a>=7)
			{
				sum += a--;
			}

			printf("%d\n\n", sum);
		}

		else
		{
			printf("Your input was less than 7\n\n");
			continue;
		}
				
	}
	return 0;
}