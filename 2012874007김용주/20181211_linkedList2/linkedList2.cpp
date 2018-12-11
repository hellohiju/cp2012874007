#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node* pNext;
} Node;

// �Լ� printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
// �Է�: ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
// ���: ����
// �μ�ȿ��: ����
void printLL(Node* ptr)
{
	while (ptr!=NULL)
	{	
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}

// �Լ� createNode()
// �Է�: ����
// ���: ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ. �̶� score=�Է�, pNext=NULL�� �Ѵ�.
// �μ�ȿ��: ����
Node* createNode(int input)
{
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;

	return ptr;
}

// �Լ� addHead()
// �Է�: ���Ḯ��Ʈ, �� ���
// ���: ����
// �μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(Node** ppHead, Node* pNewNode)
{
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}

// �Լ� averageLL
// �Է�: ���Ḯ��Ʈ
// ���: double average
// �μ�ȿ��: ����
double averageLL(Node* ptr)
{
	int sum = 0;
	int count = 0;
	double average;
	while (ptr!=NULL)
	{	
		sum += ptr->score;
		count++;
		ptr = ptr->pNext;
	}
	average = (double)sum/count;
	return average;
}

// �Լ� returnTail
// �Է�: ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
// ���: ������ ����� ������
// �μ�ȿ��: ����
Node* returnTail(Node* ptr)
{
	if (ptr == NULL)	// linked list�� ��尡 ����
		return NULL;

	while(ptr!=NULL)	// while(1)
	{	
		if (ptr->pNext==NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}

// �Լ� addTail
// �Է�: ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
// ���: ����
// �μ�ȿ��: �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���
void addTail(Node* pHead, Node* pNewNode)
{
	if(pHead==NULL)
		printf("error: can't add a tail to empty linked list\n");

	Node* pTail = returnTail(pHead);
	pTail->pNext = pNewNode;
}
/*
void addTail(Node** ppHead, Node* pNewNode)
{
	

	if(*ppHead==NULL)
	{
		//printf("error: can't add a tail to empty linked list\n");
		*ppHead = pNewNode;
	}

	Node* pTail = returnTail(*ppHead);
	pTail->pNext = pNewNode;
}
*/

int main()
{
	// ����ȯ //
	double test;
	test = 10/4;	// 1. (10/4) -> 2�� ��ȯ
					// 2. int 2�� double�� 2.0���� ��ȯ
	printf("test = %f\n",test);

	test = 10.0/4;	// (10.0/4) -> 2.5�� ��ȯ
	printf("test = %f\n",test);

	test = ((double)10)/4;	// 1. int 10�� double 10.0���� ��ȯ
							// 2. (10.0/4) -> 2.5�� ��ȯ
	printf("test = %f\n",test);


	// linked list //
	Node* pHead = NULL;	// headnode�� ������ NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
	
	pHead = createNode(11);
	pHead->pNext = createNode(20);

	Node* ptr;
	ptr = createNode(50);
	addHead(&pHead, ptr);

	addHead(&pHead, createNode(40));
	addTail(pHead, createNode(33));
	printLL(pHead);

	printf("average = %f\n",averageLL(pHead));
	
	// pHead = NULL;
	// addTail(pHead, createNode(103));
	// printLL(pHead);
	return 0;
}