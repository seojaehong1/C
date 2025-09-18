#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "InsertLinkedList.h"
// 공백 연결 리스트를 생성하는 함수
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;		// 공백 리스트이므로 NULL로 설정
	return L;
}

// 연결 리스트의 전체 메모리를 해제하는 함수
void freeLinkedList_h(linkedList_h* L) {
	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

// 연결 리스트를 출력하는 함수
void printList(linkedList_h* L) {
	listNode* p;
	printf("L = (");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

// 첫 번째 노드 삽입하는 함수
void insertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	// 삽입할 새 노드 할당
	strcpy(newNode->data, x);						// 새 노드의 데이터 필드에 x 복사  
	newNode->link = L->head;
	L->head = newNode;
}

// ��带 pre �ڿ� �����ϴ� ����
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L->head == NULL) {				// ���� ����Ʈ�� ���
		newNode->link = NULL;		   // �� ��带 ù ��°���� ������ ���� ����
		L->head = newNode;
	}
	else if (pre == NULL) {			// ���� ��ġ�� �����ϴ� ������ pre�� NULL�� ���
		newNode->link = L->head;
		L->head = newNode;			// �� ��带 ù ��° ���� ����
	}
	else {
		newNode->link = pre->link;	// ������ pre�� ��� �ڿ� �� ��� ����
		pre->link = newNode;
	}
}

// ������ ���� �����ϴ� ���� 
void insertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->head == NULL) {		// ���� ����Ʈ�� ������ ���					
		L->head = newNode;		// �� ��带 ����Ʈ�� ���� ���� ����
		return;
	}
	// ���� ����Ʈ�� ������ �ƴ� ��� 	
	temp = L->head;
	while (temp->link != NULL) temp = temp->link;	// ���� ����Ʈ�� ������ ��带 ã��
	temp->link = newNode;							// �� ��带 ������ ���(temp)�� ���� ���� ���� 
}