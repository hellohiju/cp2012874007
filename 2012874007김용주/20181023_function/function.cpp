#include <stdio.h>

// today's topic
// "FUNCTION"

// 함수 절차적 요약화
// 구조체 선어적 요약화

// 자바 하나로 합침

// 함수 sum()
// 입력: 두 정수
// 출력: 두 정수의 합
// 부수효과: 없음

int gVar = 100;			// global variable 전역변수: 쓰지 말 것

int sum(int a, int b)	// 함수 선언
{
	int c;				// 함수 본체
	c = a+b+gVar;
	return c;
}

// 1. 함수 이름 sum()
// 2. 매개변수의 개수 2
// 3. 각 매개변수의 자료형 int int
// 4. 반환값의 자료형 int
// -> 함수 호출하기 위해 필요한 정보들

int main()
{
	int x = 10;
	int y = 20;
	int z;

	z = sum (x, y);

	printf("z = %d\n", z);

	return 0;
}
