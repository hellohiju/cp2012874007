// hw2-10.cpp
// 소수(prime-number) 검사와 흡사하게 
// 사용자가 입력한 수의 인수들을 모두 출력하는 프로그램을 작성하시오.
// 8 => 2 4 
// 12 => 2 3 4 6

#include <stdio.h>
int main()
{
	printf("divisor\n");

	int a;
	int i = 2;

	printf("Enter an integer: ");
	scanf("%d", &a);

	while(i<=a/2)
	{
		if(a%i==0)
			printf("%d ",i);
		i++;
	}

	return 0;
}