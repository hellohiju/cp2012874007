// hw2-3.cpp
// 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력
// (while문 사용)

#include <stdio.h>
int main()
{
	printf("sum multiples of 3 less than 100\n");

	int i = 0;
	int sum = 0;

	while (++i <= 10)
	{
		if (i % 3 == 0)
			sum += i;
	}
	
	printf ("SUM = %d\n", sum);

	return 0;
}
