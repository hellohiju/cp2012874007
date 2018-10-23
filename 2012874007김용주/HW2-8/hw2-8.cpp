// hw2-8.cpp
// 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.
// (5이면 5단을 출력)

#include <stdio.h>
int main()
{
	printf("times table\n");

	int a;

	printf("Enter between 1 and 9\n");
	printf("times table of: ");
	scanf("%d", &a);

	for (int i=0; i<10; i++)
	{
		printf("%d * %d = %d\n", a, i, a*i);
	}

	return 0;
}
