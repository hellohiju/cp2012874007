#include <stdio.h>

// printArray
// �Է� : array
// ��� : ����
// �μ�ȿ�� : ȭ�鿡 �迭 ���� ���

void printArray(int arr[], int length)
{
	for (int index = 0; index < length; index++)
		printf("array[%d] = %d\n", index, arr[index]);
}

int main()
{
	int a[3] = {10, 20, 30};	// array declaration: name a, length 3
	printArray(a, 3);

	int* ptr;
	// �迭�� �̸��� ����ϸ� �� �迭 ù ����� �����Ͱ�
	ptr = a;	// ptr = &a[0]
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	printf("\n", ptr[0]);

	// ������ �����̸��� �迭 �̸����� ����� �� �ִ�.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[0] = %d\n", ptr[1]);
	printf("a[0] = %d\n", ptr[2]);

	

	return 0;
}