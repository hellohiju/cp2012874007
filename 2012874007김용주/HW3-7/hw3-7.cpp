// hw3-7
// �� ���� �迭�� ���� ��ȯ�ϴ� �Լ�

#include <stdio.h>

// �̸�: addArray
// �Է�: �迭, �迭����
// ���: �迭 �� ��ҵ��� ��
// �μ�ȿ��: ����

int addArray(int a[], int length)
{
	int sum = 0;
	for (int count=0; count<length; count++)
		sum += a[count];

	return sum;
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int len = 5;
	
	printf("addArray = %d\n",addArray(arr, 5));

}