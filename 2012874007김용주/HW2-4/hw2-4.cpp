// hw2-4.cpp
// 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력
// (for문 사용)

#include <stdio.h>
int main()
{
	printf("sum multiples of 3 less than 100\n");

	int i = 0;
	int sum = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	
	printf ("SUM = %d\n", sum);

	return 0;
}
