#include <stdio.h>

// today's topic
// "FUNCTION"

// �Լ� ������ ���ȭ
// ����ü ������ ���ȭ

// �ڹ� �ϳ��� ��ħ

// �Լ� sum()
// �Է�: �� ����
// ���: �� ������ ��
// �μ�ȿ��: ����

int gVar = 100;			// global variable ��������: ���� �� ��
						// auto : default
						// static

int sum(int a, int b)	// �Լ� ����
{
	int c;				// �Լ� ��ü
	c = a + b; //+gVar
	return c;
}


// 1. �Լ� �̸� sum()
// 2. �Ű������� ���� 2
// 3. �� �Ű������� �ڷ��� int int
// 4. ��ȯ���� �ڷ��� int
// -> �Լ� ȣ���ϱ� ���� �ʿ��� ������

// �Լ�: goodPrint()
// �Է�: ����
// ���: ����
// �μ�ȿ��: ȭ�鿡 good ���

void goodPrint() {
	printf("good\n");			// void : no return
}

int main()
{
	int x = 10;					// 0) �����̸� �����ڷ��� ������ ���� x, y, z
	int y = 20;
	int z;

	z = sum (x, y);				// 1) �Լ� ȣ�� : �Ű������� ���� �߰� ���� Ȯ�� a, b
								// 2) Ȯ���� ������ �Ű������� ����
								// 3) �Լ��� �̵��ؼ�

//	int sum(int a, int b)		// 4) �Ű����� �̸� ���� a, b
//	{
//	int c;						// 5) c ���� Ȯ��
//	c = a + b;					// 5) c �� ����
//	return c;					// 6) "����"�� ���ϰ�c ����
//	}							// 7) a, b, c ���� "�Ҹ�"

								// 8) ���� ������ = �� ���� z�� c�� ����

	printf("z = %d\n", z);
	goodPrint();
// click the gray bar on the left side
// set breakpoint
// �� ���� ���� ����
// ���� windows �����
// f11 step into: �� �ܰ辿 �ڵ� ����
// f10 step over: ���ν��� ���� ����
// ����� > â > �����

	return 0;
}
