// hw1-4.cpp
// 점수(정수)를 입력 받아서 등급(A, B, C, D, E)을 출력하는 프로그램을 작성하시오.
// (A : 100-80, B: 79-60, C: 59-40, D: 39-20, E: 19-0)

#include <stdio.h>
int main()
{
	int point;

	printf("points to grade\n");

	printf("points: ");
	scanf("%d", &point);

	if (point <= 100 && point >= 80)
		printf("grade: A\n\n");
	else if (point <= 79 && point >= 60)
		printf("grade: B\n\n");
	else if (point <= 59 && point >= 40)
		printf("grade: C\n\n");
	else if (point <= 39 && point >= 20)
		printf("grade: D\n\n");
	else if (point <= 19 && point >= 0)
		printf("grade: E\n\n");
	else
		printf("Wrong input!\n\n");

	return 0;
}
