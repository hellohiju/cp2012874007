// hw2-24.cpp
/*사용자에게 라인 수를 입력받아서 그 줄 수 만큼 별표 삼각형을 만드시오.
사용자 입력: 4
*
***
*****
*******
*/

#include <stdio.h>
int main()
{
	int input;
	int i = 1;

	printf("Enter an integer: ");
	scanf("%d", &input);
	
	while (1)
	{
		int k;
		for(k=0; k<i; k++)
		{
			printf("*");
		}

		i += 2;
		printf("\n");

		if (i>input*2)
			break;
	}
	return 0;
}