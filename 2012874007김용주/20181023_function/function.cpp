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
						// auto : default
						// static

int sum(int a, int b)	// 함수 선언
{
	int c;				// 함수 본체
	c = a + b; //+gVar
	return c;
}


// 1. 함수 이름 sum()
// 2. 매개변수의 개수 2
// 3. 각 매개변수의 자료형 int int
// 4. 반환값의 자료형 int
// -> 함수 호출하기 위해 필요한 정보들

// 함수: goodPrint()
// 입력: 없음
// 출력: 없음
// 부수효과: 화면에 good 출력

void goodPrint() {
	printf("good\n");			// void : no return
}

int main()
{
	int x = 10;					// 0) 변수이름 변수자료형 변수값 저장 x, y, z
	int y = 20;
	int z;

	z = sum (x, y);				// 1) 함수 호출 : 매개변수를 위한 추가 공간 확보 a, b
								// 2) 확보한 공간에 매개변수값 복사
								// 3) 함수로 이동해서

//	int sum(int a, int b)		// 4) 매개변수 이름 지정 a, b
//	{
//	int c;						// 5) c 공간 확보
//	c = a + b;					// 5) c 값 저장
//	return c;					// 6) "구름"에 리턴값c 복사
//	}							// 7) a, b, c 공간 "소멸"

								// 8) 대입 연산자 = 에 의해 z에 c값 대입

	printf("z = %d\n", z);
	goodPrint();
// click the gray bar on the left side
// set breakpoint
// 그 문장 전에 멈춤
// 로컬 windows 디버거
// f11 step into: 한 단계씩 코드 실행
// f10 step over: 프로시저 단위 실행
// 디버그 > 창 > 조사식

	return 0;
}
