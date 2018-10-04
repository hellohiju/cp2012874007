#include <stdio.h>
int main() {
	
	// 변수선언문
	// [자료형] [변수이름];

	// int [자료형]	변수의 자료형 지정
	//				변수가 가질 수 있는 값의 범위를 지정
	// a   [변수이름]	변수의 이름 소개
	//				메모리 저장장소의 이름

	// C언어에서는 변수를 사용하기 전에 반드시 변수선언을 해야 한다

	// [int]	 -2^16 <= a <= 2^16-1의 정수
	//		     2^32가지의 정수
	//			 4byte = 4*8bit의 저장장소 사용

	// [float]	 소수점 숫자(실수) 표현
	
	// blue characters: 예약된 단어

	int a;		//변수선언문: 변수 이름 a, 변수 a의 자료형은 int
	float ff;

	// 대입문		우변의 "값"을 좌변의 저장장소로 이동(저장)

	// literal	소스코드에서 특정한 자료형의 값을 직접 표현하는 방법
	//			정수형 10, 0xF3
	//			실수형 3.14, 10f, 0.1E-5
	//			문자형 a
	
	a = 10;

	int b = 20;	//변수 선언 + 초기화

	int c = 1, d;

	//수식(expression)	연산자(operator)와 피연산자(operand)의 조합
	//					모든 수식은 값을 반환(return)*******************

	//[%] 나머지 연산자

	d = a + b + c;

	printf("d = %d\n", d);		//[%d] 10진수로 표현
	printf("d = %x\n\n", d);	//[%x] 16진수로 표현

	a = b = c = 100;		//(a = (b = (c = 100)))
							//1)우변의 값을 좌변의 저장장소에 저장 2)우변의 값을 return

	printf("c = %d\n", c);
	printf("b = %d\n", b);
	printf("a = %d\n\n", a);

	//증감연산자

	b = 10;
	a = b++;	//[b++] 반환값=b, 부수효과 b=b+1
	printf("b=10; a = b++;\n");
	printf("a = %d\n", a);
	printf("b = %d\n\n", b);

	b = 10;
	a = ++b;	//[b++] 반환값=b+1, 부수효과 b=b+1	
	printf("b=10; a = ++b;\n");
	printf("a = %d\n", a);
	printf("b = %d\n\n", b);

	//관계연산자 < > <= => == !=

	a = 10;
	b = 20;

	c = a < b;	//연산결과 true c -> 1
	c = a > b;	//연산결과 false c -> 0

	printf("10 > 20 = c = %d\n\n", c);

	//논리연산자 and[&&]   or[||]   not[!]

	//C언어에서 논리연산자의
	//피연산자가 0이면 거짓
	//피연산자가 0이 아니면 참

	a = 1 && 0;		//a -> 0
	a = 1 || 0;		//a -> 1
	a = 100 || 0;	//a -> 1

	//연산자 우선순위 operator precedence
	//fuctions, arrays, structures, member functions, pointer, structure
	//단항연산자 - ++ -- !
	//산술연산자     * / % >>>> + -
	//관계연산자 < <= > >= >>>> == !=
	//논리연산자        && >>>> ||
	//조건연산자
	//대입연산자

	a = 10 + 20 * 3;			//(a = (10 + (20 * 3)))
	a = 1 || 3 * 4 > 10;		//(a = (1 || ((3 * 4) > 10)))
	a = (1 || ((3 * 4) > 10));	//better

	printf("%d\n\n", a);

	//연산자 결합방향 associativity
	a = 10 + 20 + 30;

	//조건문 conditional statement
	//if

	a = 10;
	
		//조건문 시작
	if (a == 10){
		printf("a is ten\n");
		printf("yes\n\n");			//복합문 {}
	}
	else
		printf("a is not ten\n\n"); //복합문이 아닐 때는 {} 없어도 됨
		//조건문 종료

	a = 10;
	
		//조건문 시작
	if (a == 10){
		printf("a is ten\n");
		printf("yes\n\n");
	}
	else if (a == 20){
		printf("a is twenty\n");
		printf("yeah\n\n");
	}
	else
		printf("a is not ten\n\n");
		//조건문 종료

		//조건문 시작
	if (a == 10)
		printf("a is ten\n\n");
		//조건문 종료

	//키보드에서 입력받는 방법
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("You entered %d\n\n", a);
	printf("program end!\n");

	return 0;

}