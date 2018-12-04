// 프로그래밍언어의 기능
// 1. 컴퓨터의 기능(순서제어/연산/메모리접근)
// 2. 요약화(절차적:함수/선언적:구조체)

// 구조체(structure)
// 구성요소 + 요소 간의 관계

#include <stdio.h>

// 데이터 타입의 별명 선언
typedef int myIntType; // 자료형 "int" 앞으로 "myIntType"라고도 부르겠다.


/*
// stucture declaration: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언
struct complex
{
	double real;		// member variable
	double imag;
};	// structure declaration must have semicolon!

typedef struct complex Complex;	// 자료형 "struct complex"를 "Complex"라고 부르겠다.
*/


// 이렇게 한번에 쓸 수 있다.
typedef struct
{
	double real;
	double imag;
} Complex;


// 함수 printComplex
// 입력: 복소수
// 출력: x
// 부수효과: x

/*
void printComplex(Complex x)
{
	printf("%f + j%f\n", x.real, x.imag);
}
*/

void printComplex(Complex* ptr)	// 모든 경우 구조체의 포인터를 매개변수로 전달받는다.
{
	if(ptr->imag >= 0)
		printf("%f + j%f\n", ptr->real, ptr->imag);
	else
		printf("%f - j%f\n", ptr->real, -ptr->imag);
}

// 함수 convertToConjugate
// 입력: 복소수(포인터)
// 출력: x
// 부수효과: 입력된 복소수가 켤레 복소수로 변환됨
void convertToConjugate(Complex* ptr)
{
	ptr->imag = -ptr->imag;
}

// 함수 returnConjugate
// 입력: 복소수(포인터)
// 출력: 복소수
// 부수효과: x
Complex* returnConjugate(Complex* ptr)
{
	Complex temp;
	temp.real = ptr->real;
	temp.imag = -ptr->imag;

	return &temp;
}

int main()
{
	myIntType count = 10;

	// 구조체 변수 선언
	Complex a,b;
	a.real = 10;	// 구조체변수의 멤버변수 접근방법: 구조체이름변수.멤버변수
	a.imag = 20;

	printComplex(&a);

	// 구조체 포인터 변수 선언
	// 대부분 구조체는 구조체 포인터 변수를 사용하여 접근한다.
	Complex* ptr;
	ptr = &a;
	ptr->real = 100;	// 구조체포인터변수의 멤버변수 접근방법: 구조체이름변수->멤버변수
	ptr->imag = 200;

	printComplex(&a);
	
	convertToConjugate(&a);
	printComplex(&a);
	
	ptr = returnConjugate(&a);
	printComplex(&a);
	return 0;
}