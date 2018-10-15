// hw1-1.cpp
// 두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int a, b;

	printf("Find the larger integer between two integers\n");

	printf("Enter an integer1: ");
	scanf("%d", &a);
	printf("Enter an integer2: ");
	scanf("%d", &b);

	if (a > b)
		printf("%d is larger\n\n", a);
	else if (a < b)
		printf("%d is larger\n\n", b);
	else
		printf("These integers are equal\n\n");

	return main();
}
