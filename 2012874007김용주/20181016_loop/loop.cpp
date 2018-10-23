// 20181016
// loop.cpp

// 수정사항
// int : -2^31 ~ (2^31 - 1)

// float 잘 안씀
// double 씀

// ctrl + ] : matching parentheses
// ctrl + k + f : auto format
// ctrl + k + c : comment out for selected block
// ctrl + k + u : undo comment out for selected block

#include <stdio.h>
int main()
{
	printf("1부터 10까지 출력\n");
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

	          / count = 1 /                         1) loop변수 초기화

			      |

	------->  / count <= 10 / ----- / False /       2) 조건식
	|                                   |
	|		       |                    |
	|                                   |
	|            / True /               |
	|                                   |
	|		       |                    |
	|                                   |
	|	    / printf count /            |           3) 반복문장
	|                                   |
	|		       |                    |
	|	                                |
	---   / count = count + 1 /         |           4)loop변수 변화
	                                    |
	                                    |
	       / return 0 / <----------------

    */

	printf("\n\n1부터 100까지 3의 배수만 화면에 출력\n");
	count = 1;
	while (count <= 100)
	{
		if (count % 3 == 0)
			printf("count = %d\n", count);
		count++;
	}

	printf("\n\n1부터 100까지 3의 배수를 제외한 정수만 화면에 출력\n");
	count = 1;
	while (count <= 100)
	{
		if (count % 3 != 0)
			printf("count = %d\n", count);
		count++;
	}

	// continue : 조건식으로 돌아간다
	// break : 루프를 탈출

	printf("\n\n키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램\n");
	printf("Enter 100 to end the program\n");
	// 위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료

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

	printf("\nQUIZ: 소수인지 알아보기\n");
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

	printf("\n1부터 100까지 정수의 합\n");
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

	printf("최대공약수\n");
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

	printf("최대공약수: %d\n", a);

	return 0;
	
	printf("\nprogram ended!\n");

	return 0;
}