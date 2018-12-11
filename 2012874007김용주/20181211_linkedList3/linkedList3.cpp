#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node* pNext;
} Node;

typedef struct linkedlist
{
	Node* pHead;
	Node* pTail;
	int nNode;
} LinkedList;

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
// �Է�: ���Ḯ��Ʈ ����ü ������(LinkedList*), �� ��� ������
// ���: ����
// �μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(LinkedList* pList, Node* pNewNode)
{
	if(pList->pHead==NULL)
		pList->pTail = pNewNode;

	pNewNode->pNext = pList->pHead; //#1 ���ο� ����� ������ ���� �ִ� ����Ʈ�� pHead
	pList->pHead = pNewNode;		//#2
	pList->nNode++;
}

// �Լ� printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
// �Է�: ���Ḯ��Ʈ ����ü ������(LinkedList*)
// ���: ����
// �μ�ȿ��: ����
void printLL(LinkedList* pList)
{
	Node* ptr = pList->pHead;
	while (ptr!=NULL)
	{	
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}

int main()
{
	LinkedList* pList;
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList->pHead = NULL;
	pList->pTail = NULL;
	pList->nNode = 0;

	addHead(pList, createNode(10));
	addHead(pList, createNode(20));
	addHead(pList, createNode(30));
	addHead(pList, createNode(40));

	printLL(pList);
	return 0;
}