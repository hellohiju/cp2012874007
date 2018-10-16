// hw2-2.cpp
// 10개의 정수를 입력 받아 그 총합을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int a;
	int i = 0;
	int sum = 0;

	while (i < 10)
	{
		printf("integer%d = ", ++i);
		scanf("%d", &a);
		sum += a;
	}
	
	printf("SUM = %d\n", sum);

	return 0;
}
