// hw2-13.cpp
// month와 day를 입력 받아, 1월 1일부터의 총 day수를 출력하는 프로그램을 작성하시오.
// (switch문 사용)
// 1월 20일은 20일 출력, 2월 5일은 36일 출력. 단 2월은 28일로 계산.

#include <stdio.h>
int main()
{
	printf("How many days have passed since January 1st?\n");

	int month;
	int day;

	printf("Today is\n");
	printf("month: ");
	scanf("%d", &month);
	printf("day: ");
	scanf("%d", &day);

	switch (month)
	{
	case 1:
		printf("%d days have passed\n", day);
		break;
	case 2:
		printf("%d days have passed\n", 31+day);
		break;
	case 3:
		printf("%d days have passed\n", 31+28+day);
		break;
	case 4:
		printf("%d days have passed\n", 2*31+28+day);
		break;
	case 5:
		printf("%d days have passed\n", 2*31+28+30+day);
		break;
	case 6:
		printf("%d days have passed\n", 3*31+28+30+day);
		break;
		case 7:
		printf("%d days have passed\n", 3*31+28+2*30+day);
		break;
		case 8:
		printf("%d days have passed\n", 4*31+28+2*30+day);
		break;
		case 9:
		printf("%d days have passed\n", 5*31+28+2*30+day);
		break;
		case 10:
		printf("%d days have passed\n", 5*31+28+3*30+day);
		break;
		case 11:
		printf("%d days have passed\n", 6*31+28+3*30+day);
		break;
		case 12:
		printf("%d days have passed\n", 6*31+28+4*30+day);
		break;
	}

	return 0;
}
