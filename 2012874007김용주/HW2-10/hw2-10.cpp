// hw2-10.cpp
// �Ҽ�(prime-number) �˻�� ����ϰ� 
// ����ڰ� �Է��� ���� �μ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 8 => 2 4 
// 12 => 2 3 4 6

#include <stdio.h>
int main()
{
	printf("divisor\n");

	int a;
	int i = 2;

	printf("Enter an integer: ");
	scanf("%d", &a);

	while(i<=a/2)
	{
		if(a%i==0)
			printf("%d ",i);
		i++;
	}

	return 0;
}