// hw2-7.cpp
// 0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.

#include <stdio.h>
int main()
{
	printf("sum\n");

	int a;
	int sum = 0;
	
	while (1)
	{
		printf("Enter an integer: ");
		scanf("%d", &a);

		if (a != 0)
		{
			sum += a;
			continue;
		}
			
		else
		{
			printf ("SUM = %d\n", sum);
			break;
		}
	}

	return 0;
}
