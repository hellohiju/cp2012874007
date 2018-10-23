// hw2-22.cpp
// 사용자가 0을 입력할 때까지 여러 숫자를 입력받아,
// 입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.
/*사용자 입력 
3
2
4
8
0
결과: 8
*/



#include <stdio.h>
int main()
{
	printf("Largest\n");

	int a = 0;
	int b = 0;

	printf("Enter integers\n");

	while (1)
	{
		printf("integer: ");
		scanf("%d", &a);

		if (a > b)
			b = a;

		if (a == 0)
		{
			printf("The largest number is %d\n", b);
			break;
		}
	}
	return 0;
}