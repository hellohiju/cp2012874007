// hw2-19.cpp
// ����ڷκ��� �� ���ڸ� �Է¹޾�,
// �Է¹��� ���ڰ� �Ҽ����� �ƴ����� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	printf("Prime Number\n");

	int i = 2;
	int isPrime = 1;
	int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

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
		printf("%d is a prime number\n", n);
	else
		printf("%d is NOT a prime number\n", n);

	return 0;
}