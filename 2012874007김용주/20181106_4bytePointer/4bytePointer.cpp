#include <stdio.h>

void test (int a)
{
	a = 100;
}

void testPointer(int* ptr)	// a�� �ּҰ��� input
{							// int* ptr = &a
	*ptr = 100;				// *ptr = data of &a = 100
}

int main()
{
	int a = 10;

	// test
	test(a);				// test�Լ� ȣ�� ��, test�Լ��� �Ű�����a�� ����, test�Լ� ����� �Ҹ�
	printf("a = %d\n", a);	// ���� ��µǴ� ���� test�Լ��� a=100�� �ƴ϶� main�Լ��� a=10
							// test�Լ��� a=100�� �̹� �������!

	// *&a = a (data of address of a)

	// testPointer
	testPointer(&a);		// testPointer�� �����͸� �Ű����������� ����
	printf("a = %d\n", a);	// int* ptr &a = data of a = a = 100

	return 0;
}