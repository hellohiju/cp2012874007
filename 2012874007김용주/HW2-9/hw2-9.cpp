// hw2-9.cpp
// 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.
// (5이면 5단을 출력)
// 위의 문제에서 1부터 9사이 이외의 숫자를 사용자가 잘못 입력할 수도 있으니, 
// 이 경우에 잘못된 숫자라는 것을 알려주는 에러 메시지를 출력하고 다시 숫자를 입력 받도록 처리하시오.
// (입력의 유효성 검사)

#include <stdio.h>
int main()
{
	printf("times table\n");
	
	while (1)
	{
		int a;

		printf("Enter between 1 and 9\n");
		printf("times table of: ");
		scanf("%d", &a);

		if (a>=1 && a<=9)
		{
			for (int i=0; i<10; i++)
			{
				printf("%d * %d = %d\n", a, i, a*i);
			}
		}

		else
		{
			printf("Your input was wrong!\n");
			continue;
		}

		printf("\n");
	}

	return 0;
}
