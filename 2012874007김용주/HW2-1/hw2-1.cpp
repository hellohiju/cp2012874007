// hw2-1.cpp
// 1부터 10까지 연속 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int i = 1;

	while (i <= 10)
		printf("%d\n", i++);

	return 0;
}