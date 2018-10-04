#include <stdio.h>
int main() {
	
	// ��������
	// [�ڷ���] [�����̸�];

	// int [�ڷ���]	������ �ڷ��� ����
	//				������ ���� �� �ִ� ���� ������ ����
	// a   [�����̸�]	������ �̸� �Ұ�
	//				�޸� ��������� �̸�

	// C������ ������ ����ϱ� ���� �ݵ�� ���������� �ؾ� �Ѵ�

	// [int]	 -2^16 <= a <= 2^16-1�� ����
	//		     2^32������ ����
	//			 4byte = 4*8bit�� ������� ���

	// [float]	 �Ҽ��� ����(�Ǽ�) ǥ��
	
	// blue characters: ����� �ܾ�

	int a;		//��������: ���� �̸� a, ���� a�� �ڷ����� int
	float ff;

	// ���Թ�		�캯�� "��"�� �º��� ������ҷ� �̵�(����)

	// literal	�ҽ��ڵ忡�� Ư���� �ڷ����� ���� ���� ǥ���ϴ� ���
	//			������ 10, 0xF3
	//			�Ǽ��� 3.14, 10f, 0.1E-5
	//			������ a
	
	a = 10;

	int b = 20;	//���� ���� + �ʱ�ȭ

	int c = 1, d;

	//����(expression)	������(operator)�� �ǿ�����(operand)�� ����
	//					��� ������ ���� ��ȯ(return)*******************

	//[%] ������ ������

	d = a + b + c;

	printf("d = %d\n", d);		//[%d] 10������ ǥ��
	printf("d = %x\n\n", d);	//[%x] 16������ ǥ��

	a = b = c = 100;		//(a = (b = (c = 100)))
							//1)�캯�� ���� �º��� ������ҿ� ���� 2)�캯�� ���� return

	printf("c = %d\n", c);
	printf("b = %d\n", b);
	printf("a = %d\n\n", a);

	//����������

	b = 10;
	a = b++;	//[b++] ��ȯ��=b, �μ�ȿ�� b=b+1
	printf("b=10; a = b++;\n");
	printf("a = %d\n", a);
	printf("b = %d\n\n", b);

	b = 10;
	a = ++b;	//[b++] ��ȯ��=b+1, �μ�ȿ�� b=b+1	
	printf("b=10; a = ++b;\n");
	printf("a = %d\n", a);
	printf("b = %d\n\n", b);

	//���迬���� < > <= => == !=

	a = 10;
	b = 20;

	c = a < b;	//������ true c -> 1
	c = a > b;	//������ false c -> 0

	printf("10 > 20 = c = %d\n\n", c);

	//�������� and[&&]   or[||]   not[!]

	//C���� ����������
	//�ǿ����ڰ� 0�̸� ����
	//�ǿ����ڰ� 0�� �ƴϸ� ��

	a = 1 && 0;		//a -> 0
	a = 1 || 0;		//a -> 1
	a = 100 || 0;	//a -> 1

	//������ �켱���� operator precedence
	//fuctions, arrays, structures, member functions, pointer, structure
	//���׿����� - ++ -- !
	//���������     * / % >>>> + -
	//���迬���� < <= > >= >>>> == !=
	//��������        && >>>> ||
	//���ǿ�����
	//���Կ�����

	a = 10 + 20 * 3;			//(a = (10 + (20 * 3)))
	a = 1 || 3 * 4 > 10;		//(a = (1 || ((3 * 4) > 10)))
	a = (1 || ((3 * 4) > 10));	//better

	printf("%d\n\n", a);

	//������ ���չ��� associativity
	a = 10 + 20 + 30;

	//���ǹ� conditional statement
	//if

	a = 10;
	
		//���ǹ� ����
	if (a == 10){
		printf("a is ten\n");
		printf("yes\n\n");			//���չ� {}
	}
	else
		printf("a is not ten\n\n"); //���չ��� �ƴ� ���� {} ��� ��
		//���ǹ� ����

	a = 10;
	
		//���ǹ� ����
	if (a == 10){
		printf("a is ten\n");
		printf("yes\n\n");
	}
	else if (a == 20){
		printf("a is twenty\n");
		printf("yeah\n\n");
	}
	else
		printf("a is not ten\n\n");
		//���ǹ� ����

		//���ǹ� ����
	if (a == 10)
		printf("a is ten\n\n");
		//���ǹ� ����

	//Ű���忡�� �Է¹޴� ���
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("You entered %d\n\n", a);
	printf("program end!\n");

	return 0;

}