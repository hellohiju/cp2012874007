// 20181016
// loop.cpp

// ��������
// int : -2^31 ~ (2^31 - 1)

// float �� �Ⱦ�
// double ��

// ctrl + ] : matching parentheses
// ctrl + k + f : auto format
// ctrl + k + c : comment out for selected block
// ctrl + k + u : undo comment out for selected block

#include <stdio.h>
int main()
{
	printf("1���� 10���� ���\n");
	int count = 1;
	while (count <= 10)
	{
		printf("count = %d\n", count++);

		//printf("count = %d\n", count);
		//count = count + 1; 
		//count++;
		//++count;
	}

	/* flow chart

	          / count = 1 /                         1) loop���� �ʱ�ȭ

			      |

	------->  / count <= 10 / ----- / False /       2) ���ǽ�
	|                                   |
	|		       |                    |
	|                                   |
	|            / True /               |
	|                                   |
	|		       |                    |
	|                                   |
	|	    / printf count /            |           3) �ݺ�����
	|                                   |
	|		       |                    |
	|	                                |
	---   / count = count + 1 /         |           4)loop���� ��ȭ
	                                    |
	                                    |
	       / return 0 / <----------------

    */

	printf("\n\n1���� 100���� 3�� ����� ȭ�鿡 ���\n");
	count = 1;
	while (count <= 100)
	{
		if (count % 3 == 0)
			printf("count = %d\n", count);
		count++;
	}

	printf("\n\n1���� 100���� 3�� ����� ������ ������ ȭ�鿡 ���\n");
	count = 1;
	while (count <= 100)
	{
		if (count % 3 != 0)
			printf("count = %d\n", count);
		count++;
	}

	// continue : ���ǽ����� ���ư���
	// break : ������ Ż��

	printf("\n\nŰ���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�\n");
	printf("Enter 100 to end the program\n");
	// ���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� ����

	int input;
	while (1)
	{
		printf("Enter an integer less than 1000\n");
		printf("Input: ");
		scanf("%d", &input);

		if (input == 100)
			break;

		if (input > 1000)
		{
			printf("Your input is larger than 1000\n");
			continue;
		}

		if (input % 3 == 0)
			printf("Input %d is multiples of 3!\n\n", input);
		else
			printf("Input %d is NOT multiples of 3!\n\n", input);
		
	}

	printf("\nQUIZ: �Ҽ����� �˾ƺ���\n");
	int i = 2;
	int isPrime = 1;
	int n = 9;

	while (i < n)
	{
		if (n % i == 0)
		{
			isPrime = 0;
			break;
		}
		i++;
	}

	if (isPrime)
		printf("%d is a prime number\n", n);
	else
		printf("%d is NOT a prime number\n", n);

	printf("\n1���� 100���� ������ ��\n");
	int sum = 0;
	i = 1;

	while (i <= 100)
	{
		sum += i++;
		// sum = sum + i;
		// sum += i;
		// i += 1;
		// i = i + 1;
		// i++;
	}

	printf("SUM from 1 to 100: %d\n", sum);

	printf("�ִ�����\n");
	int a, b;
	int c;

	printf("integer1: ");
	scanf("%d", &a);
	printf("integer2: ");
	scanf("%d", &b);

	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}

	printf("�ִ�����: %d\n", a);

	return 0;
	
	printf("\nprogram ended!\n");

	return 0;
}