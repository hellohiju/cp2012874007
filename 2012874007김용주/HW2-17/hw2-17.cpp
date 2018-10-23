// hw2-17.cpp
// 1부터 100까지의 합을 for loop을 써서 구하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int sum = 0;
	int i;

	for(i=1; i<=100; i++)
	{
		sum += i;
	}

	printf("sum = %d\n", sum);

	return 0;
}