// hw2-16.cpp
/* �� Ư���� ������ ��ü �ڸ����� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� �Է� : �� ���� ���� 
��� : �ڸ����� ����
*/

#include <stdio.h>
int main()
{
	int a;
	int b = 10;
	int c = 1;

	printf("Enter an integer: ");
	scanf("%d", &a);

	while (1)
	{
		if (a/b>0)
		{
			c++;
			b = b*10;
		}

		else
		{
			printf("%d\n", c);
			break;
		}
	}
	return 0;
}