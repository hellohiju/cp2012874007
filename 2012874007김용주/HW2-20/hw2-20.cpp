// hw2-20.cpp
// 100 ������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int n;

	for (n=2; n<=100; n++)
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
			printf("%d\n", n);
	}

	return 0;
}
