// ���α׷��־���� ���
// 1. ��ǻ���� ���(��������/����/�޸�����)
// 2. ���ȭ(������:�Լ�/������:����ü)

// ����ü(structure)
// ������� + ��� ���� ����

#include <stdio.h>

// ������ Ÿ���� ���� ����
typedef int myIntType; // �ڷ��� "int" ������ "myIntType"��� �θ��ڴ�.


/*
// stucture declaration: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� ����
struct complex
{
	double real;		// member variable
	double imag;
};	// structure declaration must have semicolon!

typedef struct complex Complex;	// �ڷ��� "struct complex"�� "Complex"��� �θ��ڴ�.
*/


// �̷��� �ѹ��� �� �� �ִ�.
typedef struct
{
	double real;
	double imag;
} Complex;


// �Լ� printComplex
// �Է�: ���Ҽ�
// ���: x
// �μ�ȿ��: x

/*
void printComplex(Complex x)
{
	printf("%f + j%f\n", x.real, x.imag);
}
*/

void printComplex(Complex* ptr)	// ��� ��� ����ü�� �����͸� �Ű������� ���޹޴´�.
{
	if(ptr->imag >= 0)
		printf("%f + j%f\n", ptr->real, ptr->imag);
	else
		printf("%f - j%f\n", ptr->real, -ptr->imag);
}

// �Լ� convertToConjugate
// �Է�: ���Ҽ�(������)
// ���: x
// �μ�ȿ��: �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToConjugate(Complex* ptr)
{
	ptr->imag = -ptr->imag;
}

// �Լ� returnConjugate
// �Է�: ���Ҽ�(������)
// ���: ���Ҽ�
// �μ�ȿ��: x
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

	// ����ü ���� ����
	Complex a,b;
	a.real = 10;	// ����ü������ ������� ���ٹ��: ����ü�̸�����.�������
	a.imag = 20;

	printComplex(&a);

	// ����ü ������ ���� ����
	// ��κ� ����ü�� ����ü ������ ������ ����Ͽ� �����Ѵ�.
	Complex* ptr;
	ptr = &a;
	ptr->real = 100;	// ����ü�����ͺ����� ������� ���ٹ��: ����ü�̸�����->�������
	ptr->imag = 200;

	printComplex(&a);
	
	convertToConjugate(&a);
	printComplex(&a);
	
	ptr = returnConjugate(&a);
	printComplex(&a);
	return 0;
}