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

int sum(int a, int b)	// �Լ� ����
{
	int c;				// �Լ� ��ü
	c = a+b+gVar;
	return c;
}

// 1. �Լ� �̸� sum()
// 2. �Ű������� ���� 2
// 3. �� �Ű������� �ڷ��� int int
// 4. ��ȯ���� �ڷ��� int
// -> �Լ� ȣ���ϱ� ���� �ʿ��� ������

int main()
{
	int x = 10;
	int y = 20;
	int z;

	z = sum (x, y);

	printf("z = %d\n", z);

	return 0;
}
