// hw2-11.cpp
// �Ҽ�(prime-number) �˻�� ����ϰ� 
// ����ڰ� �Է��� ���� �μ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 8 => 2 4 
// 12 => 2 3 4 6
// ���� ������ 0�� �Է��ϱ� �������� ��� ����(�μ� ���)�ϵ��� �����Ͻÿ�.

#include <stdio.h>
int main()
{
	printf("divisor\n");

	while (1)
	{
		int a;
		int i = 2;

		printf("Press 0 to end\n");
		printf("Enter an integer: ");
		scanf("%d", &a);

		if (a!=0)
		{
			while(i<=a/2)
			{
				if(a%i==0)
					printf("%d ",i);
				i++;
			}
			printf ("\n\n");
		}

		else
			break;
	}

	return 0;
}