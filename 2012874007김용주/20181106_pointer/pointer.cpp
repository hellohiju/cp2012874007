#include <stdio.h>


// pointer  1) �޸��ּ�
//			2) �޸� �ּҸ� �������� �ϴ� �ڷ���
int main()
{
															// name: variable : value
	int a = 10;		// variabel declaration + initialize	// a   : int      : 10
	int* ptr;		// pointer variable declaration			// ptr : int*     : -		int* (interger�ڷ���)
	ptr = &a;												// ptr :		  : &a		&a(address of a, the first memory)
	*ptr = 20;		// �����ͺ���ptr�� ����Ű�� ���� ������		// *ptr:		  : 20      ptr*(data of ptr)
	printf("a = %d\n", a);

	return 0;
}