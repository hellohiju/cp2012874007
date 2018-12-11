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

// 함수 averageLL
// 입력: 연결리스트
// 출력: double average
// 부수효과: 없음
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

// 함수 returnTail
// 입력: 연결리스트 (연결리스트의 헤드노드 포인터)
// 출력: 마지막 노드의 포인터
// 부수효과: 없음
Node* returnTail(Node* ptr)
{
	if (ptr == NULL)	// linked list에 노드가 없음
		return NULL;

	while(ptr!=NULL)	// while(1)
	{	
		if (ptr->pNext==NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}

// 함수 addTail
// 입력: 연결리스트, 추가하려는 노드 포인터
// 출력: 없음
// 부수효과: 추가하려는 노드가 연결리스트의 tail로 추가됨
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
	// 형변환 //
	double test;
	test = 10/4;	// 1. (10/4) -> 2를 반환
					// 2. int 2를 double형 2.0으로 변환
	printf("test = %f\n",test);

	test = 10.0/4;	// (10.0/4) -> 2.5를 반환
	printf("test = %f\n",test);

	test = ((double)10)/4;	// 1. int 10을 double 10.0으로 변환
							// 2. (10.0/4) -> 2.5를 반환
	printf("test = %f\n",test);


	// linked list //
	Node* pHead = NULL;	// headnode의 포인터 NULL이면 연결리스트가 없다는 의미(로 약속하자)
	
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