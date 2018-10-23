// hw2-19.cpp
// 사용자로부터 한 숫자를 입력받아,
// 입력받은 숫자가 소수인지 아닌지를 검사하는 프로그램을 작성하시오.

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