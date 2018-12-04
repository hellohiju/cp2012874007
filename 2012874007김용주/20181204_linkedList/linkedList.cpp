// linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node* pNext;
} Node;

// 함수 printLL() 화면에 연결리스트의 score값을 출력
// 입력: 연결리스트 (연결리스트의 헤드노드 포인터)
// 출력: 없음
// 부수효과: 없음
void printLL(Node* ptr)
{
	while (ptr!=NULL)
	{	
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}

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
// 입력: 연결리스트, 새 노드
// 출력: 없음
// 부수효과: 연결리스트 헤드에 새 노드를 추가
void addHead(Node** ppHead, Node* pNewNode)
{
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}
int main()
{
	Node* pHead = NULL;	// headnode의 포인터 NULL이면 연결리스트가 없다는 의미(로 약속하자)
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

