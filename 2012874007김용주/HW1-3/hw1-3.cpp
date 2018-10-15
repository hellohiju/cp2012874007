// hw1-3.cpp
// 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int a, b, c;

	printf("Find the largest integer between three integers\n");

	printf("Enter an integer1: ");
	scanf("%d", &a);
	printf("Enter an integer2: ");
	scanf("%d", &b);
	printf("Enter an integer3: ");
	scanf("%d", &c);

	if (a >= b && a >= c)
		printf("%d is the largest ingeter\n\n", a);
	else if (b >= a && b >= c)
		printf("%d is the largest ingeter\n\n", b);
	else //if (c >= a && c >= a)
		printf("%d is the largest ingeter\n\n", c);

	return 0;
}
