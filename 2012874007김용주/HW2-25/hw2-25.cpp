// hw2-25.cpp
/*다음과 같은 출력이 나오도록 프로그램을 작성하시오.
(1) *********** (2)54321012345
********* 432101234
******* 3210123
***** 21012
*** 101
* 0
*** 101 
***** 21012 
******* 3210123 
********* 432101234 
*********** 54321012345
*/

#include <stdio.h>
int main()
{
	int i=11;
	int k;

	while (i>0)
	{
		for(k=0; k<i; k++)
		{
			printf("*");
		}

		for (k=i/2; k>=0; k--)
		{
			printf("%d", k);
		}

		for (k=1; k<=i/2; k++)
		{
			printf("%d", k);
		}

		i -= 2;
		printf("\n");
	}

	while (i<=11)
	{
		for(k=i; k>0; k--)
		{
			printf("*");
		}

		for (k=i/2; k>=0; k--)
		{
			printf("%d", k);
		}

		for (k=1; k<=i/2; k++)
		{
			printf("%d", k);
		}
				
		i += 2;
		printf("\n");
	}
	
	return 0;
}