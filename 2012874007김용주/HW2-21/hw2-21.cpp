// hw2-21.cpp
// 사용자로부터 한 숫자를 입력받아,
// 입력받은 숫자 이하의 소수들의 합을 구하는 프로그램을 작성하시오.

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
