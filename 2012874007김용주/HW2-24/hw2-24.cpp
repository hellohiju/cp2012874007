// hw2-24.cpp
/*����ڿ��� ���� ���� �Է¹޾Ƽ� �� �� �� ��ŭ ��ǥ �ﰢ���� ����ÿ�.
����� �Է�: 4
*
***
*****
*******
*/

#include <stdio.h>
int main()
{
	int input;
	int i = 1;

	printf("Enter an integer: ");
	scanf("%d", &input);
	
	while (1)
	{
		int k;
		for(k=0; k<i; k++)
		{
			printf("*");
		}

		i += 2;
		printf("\n");

		if (i>input*2)
			break;
	}
	return 0;
}