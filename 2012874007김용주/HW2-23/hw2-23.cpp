// hw2-23.cpp
// ***** *
// *** ***
// * *****

// �� ����Ͻÿ�(�ݺ��� �Ἥ!)

#include <stdio.h>
int main()
{
	int i, k;
	int a = 5;

	while (a > 0)
	{
		for (i=0; i<a; i++)
		{
			printf("*");
		}

		printf(" ");

		for (k=0; k<6-a; k++)
		{
			printf("*");
		}

		printf("\n");
		a -= 2;
	}

	return 0;
}