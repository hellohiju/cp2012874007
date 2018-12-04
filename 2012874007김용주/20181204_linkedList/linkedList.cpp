// linked list

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
int main()
{
	Node* pHead = NULL;	// headnode�� ������ NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
	//Node a, b;
	//a.score = 10;	b.score = 20;
	//a.pNext = &b;	b.pNext = NULL;
	//pHead = &a;
	
	
	pHead = createNode(10);
	pHead->pNext = createNode(20);
	addHead(&pHead, createNode(40));

	Node* ptr;
	ptr = createNode(50);
	addHead(&pHead, ptr);
	printLL(pHead);


	return 0;
}

