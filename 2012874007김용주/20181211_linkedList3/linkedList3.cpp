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

// 함수 createNode()
// 입력: 성적
// 출력: 노드하나를 동적할당으로 생성하여 포인터를 반환. 이때 score=입력, pNext=NULL로 한다.
// 부수효과: 없음
Node* createNode(int input)
{
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;

	return ptr;
}

// 함수 addHead()
// 입력: 연결리스트 구조체 포인터(LinkedList*), 새 노드 포인터
// 출력: 없음
// 부수효과: 연결리스트 헤드에 새 노드를 추가
void addHead(LinkedList* pList, Node* pNewNode)
{
	if(pList->pHead==NULL)
		pList->pTail = pNewNode;

	pNewNode->pNext = pList->pHead; //#1 새로운 노드의 다음은 원래 있던 리스트의 pHead
	pList->pHead = pNewNode;		//#2
	pList->nNode++;
}

// 함수 printLL() 화면에 연결리스트의 score값을 출력
// 입력: 연결리스트 구조체 포인터(LinkedList*)
// 출력: 없음
// 부수효과: 없음
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