// hw2-14.cpp
// 사용자로부터 숫자 하나를 입력받아,
// 7부터 입력받은 수까지의 모든 정수들의 합을 구하는 프로그램을 작성하시오.
// 입력받은 숫자가 7보다 작으면 에러 메시지를 출력한다.

#include <stdio.h>
int main()
{
	printf("77777\n");

	int a;

	while(1)
	{
		int a;

		printf("Enter an integer greater than 7\n");
		printf("Input: ");
		scanf("%d", &a);

		if (a>=7)
		{
			int sum = 0;

			printf("sum of 7 to %d is ", a);

			while (a>=7)
			{
				sum += a--;
			}

			printf("%d\n\n", sum);
		}

		else
		{
			printf("Your input was less than 7\n\n");
			continue;
		}
				
	}
	return 0;
}