// hw2-11.cpp
// 소수(prime-number) 검사와 흡사하게 
// 사용자가 입력한 수의 인수들을 모두 출력하는 프로그램을 작성하시오.
// 8 => 2 4 
// 12 => 2 3 4 6
// 위의 문제를 0을 입력하기 전까지는 계속 수행(인수 출력)하도록 수정하시오.

#include <stdio.h>
int main()
{
	printf("divisor\n");

	while (1)
	{
		int a;
		int i = 2;

		printf("Press 0 to end\n");
		printf("Enter an integer: ");
		scanf("%d", &a);

		if (a!=0)
		{
			while(i<=a/2)
			{
				if(a%i==0)
					printf("%d ",i);
				i++;
			}
			printf ("\n\n");
		}

		else
			break;
	}

	return 0;
}