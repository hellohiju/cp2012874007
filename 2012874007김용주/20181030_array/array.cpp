#include <stdio.h>

// �Լ�: printArray
// �Է�: �迭
// ���: ����
// �μ�ȿ��: ȭ�鿡 ��� ��Ҹ� ���

void printArray(int arr[], int length)	// (�迭�̸�[], �迭����)
{
	for (int count=0; count<length; count++)
	{
		printf("printArray arr[%d] = %d\n", count, arr[count]);
	}
}

int main()
{
	int length = 4;
	// int a[4];
	// array declaration
	// 1. �迭�� �̸�: a
	// 2. ���element�� �ڷ���: int
	// 3. �迭�� ����: 4

	// a[0] = 20;		// index starts form 0
	// a[1] = 200;
	// a[2] = 2000;
	// a[3] = 20000;	// index ends at n-1

	int a[4] = {20, 200, 2000, 20000};		// initialize the array
	int arr[] = {3, 30, 300};				// ���� 3�� �迭 ����

	int count = 0;
	while (count < length)
	{
		printf("while loop a[%d] = %d\n", count, a[count]);
		count++;
	}

	for (count=0; count<length; count++)
	{
		printf("for loop a[%d] = %d\n", count, a[count]);
	}

	// �迭�� �Ű������� �Լ��� ������ ���
	// �迭�� �Ű������� �ϱ� ���ؼ��� 
	// �迭�� �̸��� �迭�� ���̸� �Բ� �Լ��� �Ѱܾ� �Ѵ�.
	// �迭�� �̸������� �Լ����� �迭�� ���̸� �� ����� ���� ����

	printArray(a, length);	// �迭�� �Ű�������(�迭�� �̸� a, �迭�� ���� length)

	return 0;
}