// hw1-6.cpp
// � �� �ڸ� ���� �ڸ����� ������ ���� �ٲٴ� ���α׷��� �ۼ��Ͻÿ�.
// ����� �Է� : �� ���� �� �ڸ� ����
// ��� : �ڸ����� ������ �ݴ�� �� ����

#include <stdio.h>
int main()
{
	int num, tens, units;

	printf("change digit\n");

	printf("Enter a 2-digit integer: ");
	scanf("%d", &num);

	if ((num < -9 && num > -100) || (num >9 && num <100))
	{
		units = num % 10;

		if (num > 0)
			tens = (num-units) / 10;
		else
			tens = -(num-units) / 10;

		printf("Changed integer: %d%d\n\n", units, tens);
	}

	else
	{
		printf("Wrong input!\n\n");
	}

	return 0;
}