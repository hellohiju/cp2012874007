// hw3-1
// �� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�

#include <stdio.h>

// �Լ�: printNumber
// �Է�: �� ����
// ���: ����
// �μ�ȿ��: print

void printNumber(int a, int b)
{
	int count;
	if (a<b)
	{
		for (count = a; count <= b; count++)
			printf("%d\n",count);
	}

	else
	{
		for (count = b; count <= a; count++)
			printf("%d\n",count);
	}
}

int main()
{
	printNumber(3, 10);
	printf("\n");
	printNumber(13, 5);
	printf("\n");
	printNumber(10, 10);

	return 0;
}