// hw2-15.cpp
/* 1~100 사이의 숫자 하나를 정한 뒤(랜덤으로 생성해도 됨),
10번 이내로 그 숫자를 맞추는 게임을 작성하시오.
(10번 이내로 못 맞추었을 경우는 약간 머리가 딸리는 사람이므로
Game Over 처리를 신랄하게 해 주기 바람)

예) 답이 49일 경우:

숫자를 입력하시오: 36
입력하신 숫자보다 큽니다.

숫자를 입력하시오: 51
입력하신 숫자보다 작습니다.

숫자를 입력하시오: 49
정답입니다!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 45;
	int b;
	int i = 0;


	while (1)
	{
		if (i>9)
		{
			printf("GAME OVER\n");
			break;
		}

		printf("Enter a number: ");
		scanf("%d", &b);
			

		if (a == b)
		{
			printf("정답\n");
			break;
		}

		else if (a > b)
		{
			printf("입력하신 숫자보다 작습니다.\n");
			i++;
		}

		else if (a < b)
		{
			printf("입력하신 숫자보다 큽니다.\n");
			i++;
		}
	}
	
	return 0;
}