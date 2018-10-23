// hw2-16.cpp
/* 한 특정한 정수의 전체 자릿수의 개수를 결정하는 프로그램을 작성하시오.
사용자 입력 : 한 개의 정수 
출력 : 자릿수의 개수
*/

#include <stdio.h>
int main()
{
	int a;
	int b = 10;
	int c = 1;

	printf("Enter an integer: ");
	scanf("%d", &a);

	while (1)
	{
		if (a/b>0)
		{
			c++;
			b = b*10;
		}

		else
		{
			printf("%d\n", c);
			break;
		}
	}
	return 0;
}