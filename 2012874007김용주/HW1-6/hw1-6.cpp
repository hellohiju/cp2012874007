// hw1-6.cpp
// 어떤 두 자리 수의 자릿수의 순서를 서로 바꾸는 프로그램을 작성하시오.
// 사용자 입력 : 한 개의 두 자리 정수
// 출력 : 자릿수의 순서가 반대로 된 정수

#include <stdio.h>
int main()
{
	int num, tens, units;

	printf("change digit\n");

	printf("Enter a 2-digit integer: ");
	scanf("%d", &num);

	if ((num < -9 && num > -100) || (num >9 && num <100))
	{
		units = num % 10;

		if (num > 0)
			tens = (num-units) / 10;
		else
			tens = -(num-units) / 10;

		printf("Changed integer: %d%d\n\n", units, tens);
	}

	else
	{
		printf("Wrong input!\n\n");
	}

	return 0;
}