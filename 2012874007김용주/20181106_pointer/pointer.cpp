#include <stdio.h>


// pointer  1) 메모리주소
//			2) 메모리 주소를 시작으로 하는 자료형
int main()
{
															// name: variable : value
	int a = 10;		// variabel declaration + initialize	// a   : int      : 10
	int* ptr;		// pointer variable declaration			// ptr : int*     : -		int* (interger자료형)
	ptr = &a;												// ptr :		  : &a		&a(address of a, the first memory)
	*ptr = 20;		// 포인터변수ptr이 가리키는 곳의 데이터		// *ptr:		  : 20      ptr*(data of ptr)
	printf("a = %d\n", a);

	return 0;
}