// hw2-22.cpp
// ����ڰ� 0�� �Է��� ������ ���� ���ڸ� �Է¹޾�,
// �Է¹��� ������ �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/*����� �Է� 
3
2
4
8
0
���: 8
*/



#include <stdio.h>
int main()
{
	printf("Largest\n");

	int a = 0;
	int b = 0;

	printf("Enter integers\n");

	while (1)
	{
		printf("integer: ");
		scanf("%d", &a);

		if (a > b)
			b = a;

		if (a == 0)
		{
			printf("The largest number is %d\n", b);
			break;
		}
	}
	return 0;
}