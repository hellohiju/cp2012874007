// hw2-21.cpp
// ����ڷκ��� �� ���ڸ� �Է¹޾�,
// �Է¹��� ���� ������ �Ҽ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int n;
	int sum = 0;
	int input;

	printf("Enter an integer: ");
	scanf("%d", &input);

	for (n=2; n<=input; n++)
	{
		int i = 2;
		int isPrime = 1;

		while (i < n)
		{
			if (n % i == 0)
			{
				isPrime = 0;
				break;
			}
			i++;
		}

		if (isPrime)
			sum += n;
		
	}
	printf("sum = %d\n", sum);

	return 0;
}
