// hw2-12.cpp
// for문(while)의 무한 반복과 break 문을 이용하여 
// 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	printf("Largest\n");

	int a = 0;
	int b = 0;

	printf("Enter integers\n");

	while (1)
	{
		printf("integer: ");
		scanf("%d", &a);

		if (a > b)
			b = a;

		if (a == 0)
		{
			printf("The largest number is %d\n", b);
			break;
		}
	}
	return 0;
}