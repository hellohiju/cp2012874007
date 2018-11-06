#include <stdio.h>

void test (int a)
{
	a = 100;
}

void testPointer(int* ptr)	// a의 주소값이 input
{							// int* ptr = &a
	*ptr = 100;				// *ptr = data of &a = 100
}

int main()
{
	int a = 10;

	// test
	test(a);				// test함수 호출 시, test함수의 매개변수a를 생성, test함수 종료시 소멸
	printf("a = %d\n", a);	// 따라서 출력되는 값은 test함수의 a=100이 아니라 main함수의 a=10
							// test함수의 a=100은 이미 사라졌다!

	// *&a = a (data of address of a)

	// testPointer
	testPointer(&a);		// testPointer에 포인터를 매개변수값으로 전달
	printf("a = %d\n", a);	// int* ptr &a = data of a = a = 100

	return 0;
}