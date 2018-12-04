#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	double real;
	double imag;
} Complex;	// semicolon!


// 함수 printComplex
// 입력: 복소수
// 출력: x
// 부수효과: x
void printComplex(Complex* ptr)	
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
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex));	// 동적할당 dynamic allocation
	tempPtr->real = ptr->real;
	tempPtr->imag = -ptr->imag;

	return tempPtr;
}

Complex* addComplex(Complex* a, Complex* b)
{
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex));
	tempPtr->real = a->real + b->real;
	tempPtr->imag = a->imag + b->imag;

	return tempPtr;

}

int main()
{	Complex a,b;		// 구조체 변수 선언
	a.real = 10;		// 구조체변수의 멤버변수 접근방법: 구조체이름변수.멤버변수
	a.imag = 20;

	Complex* ptr;		// 구조체 포인터 변수 선언
	ptr = &a;			// 대부분 구조체는 구조체 포인터 변수를 사용하여 접근한다.
	ptr->real = 100;	// 구조체포인터변수의 멤버변수 접근방법: 구조체이름변수->멤버변수
	ptr->imag = 200;
	printComplex(ptr);
	
	ptr = &b;
	ptr->real = 10;	
	ptr->imag = 20;
	printComplex(ptr);

	// convertToConjugate(&a);
	// printComplex(ptr);
	
	// ptr = returnConjugate(&a);
	// printComplex(ptr);

	// free(ptr);
	//printComplex(ptr);
	
	ptr = addComplex(&a, &b);
	printComplex(ptr);
	return 0;
}

// static : compile 할 때 이미 결정 됨
// dynamic : program 진행 중 running 중 execution 중 결정
// automatic