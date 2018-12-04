#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	double real;
	double imag;
} Complex;	// semicolon!


// �Լ� printComplex
// �Է�: ���Ҽ�
// ���: x
// �μ�ȿ��: x
void printComplex(Complex* ptr)	
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
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex));	// �����Ҵ� dynamic allocation
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
{	Complex a,b;		// ����ü ���� ����
	a.real = 10;		// ����ü������ ������� ���ٹ��: ����ü�̸�����.�������
	a.imag = 20;

	Complex* ptr;		// ����ü ������ ���� ����
	ptr = &a;			// ��κ� ����ü�� ����ü ������ ������ ����Ͽ� �����Ѵ�.
	ptr->real = 100;	// ����ü�����ͺ����� ������� ���ٹ��: ����ü�̸�����->�������
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

// static : compile �� �� �̹� ���� ��
// dynamic : program ���� �� running �� execution �� ����
// automatic