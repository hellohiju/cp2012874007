// hw1-2.cpp
// 하나의 정수를 입력 받아 이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int a;

	printf("Whether integer is odd or even\n");

	printf("Enter an integer: ");
	scanf("%d", &a);

	if (a%2 == 0)
		printf("%d is even\n\n", a);
	else
		printf("%d is odd\n\n", a);

	return 0;
}
