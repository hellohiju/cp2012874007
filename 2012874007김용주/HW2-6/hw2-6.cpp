// hw2-6.cpp
// 어떤 양의 정수(n)를 입력 받아
// (만약 0이나 음의 정수를 입력하면, 에러 메시지를 띄운 뒤, 다시 입력하도록 처리), 
// 그 수의 2n을 구하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	printf("double\n");

	int n;
	
	while (1)
	{
		printf("Enter an positive integer: ");
		scanf("%d", &n);

		if (n > 0)
			printf("2n = %d\n", 2*n);
		else
			printf("Your input is NOT an positive integer\n");
			continue;
	}

	return 0;
}
